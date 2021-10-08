#include<iostream>
using namespace std;
//declaring in starting
class List;

class Node
{
    int data;
    Node* Next;

    public:
    //initialization list
        Node(int d):data(d),Next(NULL){}
    int getData(){
        return data;
    }
    friend class List;
    ~Node(){
        if(Next != NULL)
            delete Next;
    }

};

class List{
    Node* head;
    Node* tail;

    int searchHelper(Node *start,int key){
        if(start == NULL)
            return -1;

        if(start->data == key)
            return 0;

        int subidx = searchHelper(start->Next,key);
        if(subidx==-1)
            return -1;
        return subidx + 1;
    }

    public:
    List():head(NULL),tail(NULL){}

    Node* begin(){
        return head;
    }

    void print(){
        Node* head = begin();
        while(head!=NULL){
            cout<<head->getData()<<"->";
            head = head->Next;
        }
    }
    void push_front(int data){
        if(head == NULL){
            Node *n = new Node(data);
            head = tail = n;
        }
        else{
            Node* n = new Node(data);
            n->Next = head;
            head = n;
        }
    }

    void push_back(int data){
        if(head == NULL){
            Node *n = new Node(data);
            head = tail = n;
        }
        else{
            Node *n = new Node(data);
            tail->Next = n;
            tail = n;
        }
    }

    void insert(int data, int pos){
        if(pos == 0){
            push_front(data);
        }
        Node* temp = head;
        for(int i = 0; i < pos - 1 ; i++){
            temp = temp->Next;
        }

        Node* n = new Node(data);
        n->Next = temp->Next;
        temp->Next = n;
    }

    //search operation , linear search
    bool search(Node *head, int key){
        Node* temp = head;
        while(temp!=NULL){
            if(temp->data == key)
            return true;

            temp = temp->Next;
        }
        return false;
    }

    //recursive search
    bool searchRecursive(Node* head, int key){
        Node* temp = head;
        if(temp == NULL)
        return false;
        if(temp->data == key)
        return true;
        else
        return searchRecursive(head->Next,key);
    }

    //finding index
    int search(int key){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key)
                return idx;
            idx++;
            temp = temp->Next;
        }
        return -1;
    }

    int searchRecursive(int key){
        int idx = searchHelper(head,key);
        return idx;
    }

    void pop_front(){
        Node* temp = head;
        head = head->Next;
        temp->Next = NULL;
        delete temp;
    }

    void reverse(Node *&head){
        Node* c = head;
        Node* p = NULL;
        Node* n;

        while (c!=NULL)
        {
            //save next node
            n = c->Next;
            //make current node point to previous
            c->Next = p;
            // update p and c take them 1 step forward
            p = c;
            c = n;
        }

        head = p;
        
    }
    

    ~List(){
        if(head!=NULL){
            delete head;
            head = NULL;
        }
    }
};