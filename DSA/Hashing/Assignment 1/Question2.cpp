#include<iostream>
#include "AnantHashing.h"
using namespace std;

/*
Name: Anant Arun || ID: 21205020 || M.tech 1st Year
Program: To find the intersection node between two linked list
*/

//Creating node using struct
struct node{
    int element;
    struct node *next;
};

//creating head
struct node* head1 = NULL;
struct node* head2 = NULL;

//creating function to insert an element
void insert(node* &h,int new_element){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->element = new_element;
    new_node->next = h;
    h = new_node;
}

//traversing
void traverse(node* &h){
    node *ptr;
    ptr = h;
    while(ptr!=NULL){
        cout<<ptr->element<<" ";
        ptr = ptr->next;
    }
}

//function to intersection between 2 linked list using hashing
node* look_intersection(node* h1, node* h2){
    AnantHashing AH;
    //inserting keys in has table for first head
    while(h1){
        AH.insert(h1->element);
        h1=h1->next;
    }

    //traversing second head to search if key already there is hash table
    while(h2){
        if(AH.search(h2->element)){
            return h2;
        }
        h2 = h2->next;
    }
    //if intersection not found
    return nullptr;
}

int main()
{
    cout<<"Anant Arun - 21205020 - Assignment 1 - Question 2"<<endl;

    //inserting nodes in head1
    for (int i = 5; i > 0; i--)
    {
        insert(head1,i);
    }
    //traversing head1
    cout<<"First Linked list:"<<endl;
    traverse(head1);
    cout<<endl;

    //inserting nodes in head2
    for (int i = 8; i > 5; i--)
    {
        insert(head2,i);
    }
    cout<<"Second Linked list:"<<endl;
    
    //creating intersection manually
    //head2->next->next->next = head1->next->next->next;

    //traversing head2 after intersection
    traverse(head2);
    cout<<endl;

    // function call
    node* key = look_intersection(head1,head2);

    //driver to check if for intersection function result
    if(key){
        cout<<"Intersection is value: "<<key->element<<endl;
    }
    else
    cout<<"Intersection not found"<<endl;

 return 0;
}