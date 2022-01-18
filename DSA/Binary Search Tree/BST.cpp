#include <bits/stdc++.h>
using namespace std;
/*Binary Search Tree

*/
class Node{
    public:
        int key;
        Node* left;
        Node* right;

        Node(int d){
            key = d;
            left = right = NULL;
        }
};

Node* insert_BST(Node* root, int key){
    if(root=NULL){
        return new Node(key);
    }
    //rec case
    if(key < root->key){
        root->left=insert_BST(root->left,key);
    }
    else{
        root->right=insert_BST(root->right,key);
    }
    return root;
}

void printInOrder(Node *root){
    if(root == NULL){
        return;
    }

    printInOrder(root->left);
    cout<<root->key<<" ";
    printInOrder(root->right);
}

bool search(Node *root , int x){
    if(root == NULL){
        return false;
    }
    if(root->key == x){
        return true;
    }
    if(x < root->key){
        return search(root->left,x);
    }
    search(root->right,x);
}

//finding min for deletion
Node* findmin(Node* root){
    while (root->left != NULL)
    {
        root->left;
    }
    return root;

}

//BST Deletion
Node* remove(Node* root , int key){
    if(root == NULL){
        return NULL;
    }
    else if(key < root->key){
        root->left = remove(root->left,key);
    }
    else if(key > root->key){
        root->right = remove(root->right,key);
    }
    else{
        //when the current node matches with the key
        // When No Children
        if(root->left == NULL and root->right == NULL){
            delete root;
            root = NULL;
        }
        // When Single child
        else if(root->left == NULL){
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL){
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        // When two child
        else{
            Node* temp = findmin(root->right);
            root->key = temp->key;
            root->right = remove(root->right,temp->key);
        }
    }
    return root;
}

//Print all elements of BST which lie in range k1 and k2
void printRange(Node*root, int k1, int k2){
    if(root==NULL){
        return;
    }
    if(root->key>=k1 and root->key<=k2){
        printRange(root->left,k1,k2);
        cout<<root->key<<" ";
        printRange(root->right,k1,k2);
    }
    else if(root->key > k2){
        printRange(root->left,k1,k2);
    }
    else{
        printRange(root->right,k1,k2);
    }
}

//all paths from root to leaf
void printRootToLeafAllPath(Node* root, vector<int> &path){
    //base cases
    if(root == NULL){
        return;
    }
    if(root->left == NULL and root->right == NULL){
        //printing vector
        for(int node:path){
            cout<<node<<"->";
        }
        cout<<root->key<<" ";
        cout<<endl;
        return;
    }

    //rec cases
    path.push_back(root->key);
    printRootToLeafAllPath(root->left,path);
    printRootToLeafAllPath(root->right,path);

    //backtracking
    path.pop_back();
    return;
}

// To check if tree is BST
bool isBSTUtil(Node* node, int min, int max)
{
    /* an empty tree is BST */
    if (node==NULL)
        return true;
             
    /* false if this node violates
    the min/max constraint */
    if (node->key < min || node->key > max)
        return false;
     
    /* otherwise check the subtrees recursively,
    tightening the min or max constraint */
    return
        isBSTUtil(node->left, min, node->key) &&
        isBSTUtil(node->right, node->key, max); 
}

bool isBST(Node * root){
    //complete this method
    return isBSTUtil(root, INT_MIN,INT_MAX);
    
}

int main(){
    Node * root = NULL;
    int arr[] = {8,3,10,1,6,14,4,7,13};

    for(int x: arr){
        root = insert_BST(root,x);
    }

    printInOrder(root);

    int key;
    cin>>key;

    root = remove(root,key);
    printInOrder(root);
    
    cout<<"Range:"<<endl;
    printRange(root,5,12);

    vector<int> path;
    printRootToLeafAllPath(root,path);
    return 0;
}