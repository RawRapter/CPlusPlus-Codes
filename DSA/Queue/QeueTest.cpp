#include<iostream>
#include "queue.h"
using namespace std;



int main(){

	queue myqueue(7);

	myqueue.enqeue(1);
	myqueue.enqeue(2);
	myqueue.enqeue(3);
	myqueue.enqeue(4);
	myqueue.enqeue(5);
	myqueue.enqeue(6);
	myqueue.enqeue(7);
	myqueue.enqeue(8);
	myqueue.dequeue();
	myqueue.dequeue();
	myqueue.enqeue(9);

	while(!myqueue.empty()){
		cout << myqueue.getfront() <<endl;
		myqueue.dequeue();
	}


	return 0;
}