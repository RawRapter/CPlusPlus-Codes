/*
Kth Last Element
Implement a function that return Kth last of element from a linked list, in a asingle pass.
We can assume k will be less than/equal to length of a linked list.
(Hint: Use to pointer similar to linked list)

Input:
We will get head of the linked list.
1->2->3->4->5->6->7
k = 3

Output:
5
*/

#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};

int kthLastElement(node * head,int k){
    node* fast = head;
    node* slow = head;
    
    int count = 0;
    while(count < k){
        fast = fast->next;
        count++;
    }
    
    while(fast!=NULL){
        slow = slow->next;
        fast = fast->next;
    }
    return slow->data;
}