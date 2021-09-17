#include<iostream>
#include "AnantHashing.h"
using namespace std;



int main(){

	AnantHashing<int>  h;
	h.insert("Mango",100);
	h.insert("Apple",120);
	h.insert("Banana",140);
	h.insert("Orange",200);
	h.insert("Kiwi",210);
	h.insert("Papapya",220);
	h.insert("Litchi",30);
	h.print();

	string fruit;
	cin>>fruit;

	int *price = h.search(fruit);
	if(price!=NULL){
		cout<< "Price of fruit is "<< *price <<endl;
	}
	else{
		cout<<"Fruit is not present";
	}

	
	h["newFruit"] = 200;
	cout<<"New fruit cost : "<<h["newFruit"]<<endl;
	h["newFruit"] += 20;

	cout<<"New fruit updated cost : "<<h["newFruit"]<<endl;

	return 0;
}