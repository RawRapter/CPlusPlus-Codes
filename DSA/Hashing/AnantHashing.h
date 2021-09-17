#include<iostream>
#include<string>
using namespace std;

//Using Chaining hashing method
//Creating template taking key as string and value can be of any datatype

//First creating node template to store the key value pairs
template<typename T>
class Node{
public:
	string key;
	T value;
	Node * next;

	Node(string key, T value){
		this->key = key;
		this->value = value;
		next = NULL;
	}
    
    //creating destructor to destroy entire row in old table durin rehashing.   
	~Node(){
		if(next!=NULL){
			delete next;
		}
	}

};

//Creating hash table format
template<typename T>
class AnantHashing{
    //creating node variable for has table
	Node<T> ** table;
	int cs; //total entries that have been inserted
	int ts; // size of table

    //Creating hash function to get the index.
	int hashFn(string key){

		int idx = 0;
		int power = 1;

		for(auto ch : key){
			idx = (idx + ch*power)%ts;
			power = (power*31)%ts;
		}
		return idx;
	}

    //creating rehash function
	void rehash(){
		// Save the ptr to the oldTable and we will do insertions in the new table
		Node<T> **oldTable = table;
		int oldTs = ts;

		cs = 0; //reintializing count
		ts = 2*ts + 1; //increasing table size

        //Ideally it should be prime, but it would increase the code thus doubling and adding 1 to make odd table size.
        //Also, using the same variable so that insert function used below knows that we have to insert in new table.
		table = new Node<T>*[ts]; 

        //making all index null for new hash table
		for(int i=0; i<ts; i++){
			table[i] = NULL;
		}

		//Copy elements from old table to new table
		for(int i=0; i<oldTs; i++){
            //pointing to old table particular index using temp
			Node<T> *temp = oldTable[i];
            //Now using temp to insert those data into new table.
			while(temp!=NULL){
				string key = temp->key;
				T value = temp->value;
				//happen in the new table
				insert(key,value);
				temp = temp->next;
			}	

			//destroy the ith linked list(in old table)
			if(oldTable[i]!=NULL){
				delete oldTable[i];
			}
		}
        //deleting old table
		delete [] oldTable;

	}

public:
    //creating constructor for class, giving default size prime number 7
	AnantHashing(int default_size = 11){
		cs = 0;
		ts = default_size;

        //intializing the hash table
		table = new Node<T>*[ts];

        //giving null values within the table such that it doesnt store garbage values
        //as initially there are no linked list connected with any index.
		for(int i=0;i<ts;i++){
			table[i] = NULL;
		}

	}


	void insert(string key, T val){

        //getting the index for key by hash function
		int idx = hashFn(key);

		Node<T>* n = new Node<T>(key,val);

		//Insertion at head of the linked list
		n->next = table[idx];
		table[idx] = n;

		cs++; //to keep the count of entries, to rehash when required.
        //creating variable to calculate how much % table is filled.
		float load_factor = cs/float(ts);
        // when it reaches 70% call for rehash.
        //(could have taken 50% also as per general scenario.)
		if(load_factor > 0.7){
			rehash();
		}

	}
    //implementing searching functionality, searching via finding address
	T* search(string key){
		int idx = hashFn(key);

		Node<T> *temp = table[idx];

		while(temp!=NULL){
			if(temp->key == key){
				return &temp->value;
			}
			temp = temp->next;
		}

		return NULL;
	}

    //using operator overloading way to update the present keys.
	T& operator[](string key){
		//return the value 
		// if key is not found then create a new node and return
		// return the existing node
		T* valueFound = search(key);
		if(valueFound==NULL){
			T object;
			insert(key,object);
			valueFound = search(key);
		}

		return *valueFound;

	}

    //Not required in hashing, making it just to check hashing is working fine.
	void print(){
		//Iterate over buckets
		for(int i=0;i<ts;i++){
			cout<<"Bucket "<<i<<"->";

			Node<T> *temp = table[i];
			while(temp!=NULL){
				cout<< temp ->key <<"->";
				temp = temp->next;

			}
			cout <<endl;
		}
	}

};