/*
Alternate Merge
Given two linked list , insert elements of second list into first list
in alternate position of first linked list.

Input:
In the function point to the start of the two linkd list is passed
Output:
Return a pointer to the new merged list

Sample:
Input:
5->7->13->17->11
12->10->2->4->6

Output:
5->12->7->10->13->2->17->4->11->6
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

node* apend(node* root, int d){
    //first node
    if(root == NULL) return new node(d);

    //other nodes
    node* temp = root;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = new node(d);
    return root;
}

node* alternateMerge(node * root1, node* root2){
    //Complete this function 
    node* root = NULL;
    //if either of the given linked list is empty
    if(!root1) return root2;
    if(!root2) return root1;
    while(root1 && root2){
        root = apend(root, root1->data);
        root = apend(root, root2->data);
        root1 = root1->next;
        root2 = root2->next;
    }

    //If either of the linked list is left with nodes and another one is finished
    if(root1){
        while(root1){
            root = apend(root, root1->data);
            root1 = root1->next;
        }
    }
    if(root2){
        while(root2){
            root = apend(root, root2->data);
            root2 = root2->next;
        }
    }

    return root;
}