/*
Mirror a BST
GIven a binary tree, convert it into its mirror form. A binary tree
is said to be mirrored when left and right children of all non leaf nodes are
interchanged.
*/

#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
   int key;
   Node *left;
   Node *right;

   Node(int key){
       this->key = key;
       left = right  = NULL;
   }
};

void mirror(Node* node){
    if(node == NULL)
    return;
    else{
        struct Node* temp;
        
        //Recursion
        mirror(node->left);
        mirror(node->right);
        
        //Swapping
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}

Node* mirrorBST(Node * root){
    //complete this method
    
    mirror(root);
    return root;
    
}
