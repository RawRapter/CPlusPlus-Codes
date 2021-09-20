#include<iostream>
#include "AnantHashing.h"
using namespace std;

/*
Name: Anant Arun || ID: 21205020 || M.tech 1st Year
Program: Check wether a linked list is cylic or not using hash table
*/

//Creating node using struct
struct node{
    int element;
    struct node *next;
};

//creating head
struct node* head = NULL;

//creating function to insert an element
void insert(int new_element){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->element = new_element;
    new_node->next = head;
    head = new_node;
}

//function for printing elements
void traverse(){
    node *ptr;
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->element<<" ";
        ptr = ptr->next;
    }
}

//function to detect loop
bool detect_loop(node *h){
    AnantHashing  AH;
    while(h!=NULL){
        //when key found in hash table
        if(AH.search(h->element)){
            return true;
        }
        //otherwise just inserting
        AH.insert(h->element);
        h=h->next;
    }
    return false;
}
int main()
{
    cout<<"Anant Arun - 21205020 - Assignment 1 - Question 1"<<endl;
    insert(1);
    insert(3);
    insert(5);
    insert(7);
    traverse();
    cout<<endl;

    //creating case to create loop
    //head->next->next->next->next = head;

    //driver function to check for loop
    if(detect_loop(head))
    cout<<"Loop Found!!"<<endl;
    else
    cout<<"Loop Not found"<<endl;
 return 0;
}