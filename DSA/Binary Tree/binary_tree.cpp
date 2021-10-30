#include<iostream>
#include<queue>
using namespace std;
/*Binary Tree
Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
-1 means NULL no node
*/
class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            data = d;
            left = right = NULL;
        }
};

//PreOrder build of the tree
Node* buildTree(){
    int d;
    cin>> d;

    if(d==-1){
        return NULL;
    }

    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

// PreOrder Printing
void printPreOrder(Node *root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

//InOrder Traversal
void printInOrder(Node *root){
    if(root == NULL){
        return;
    }

    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
}

//PostOrder Traversal - bottom up traversal
void printPostOrder(Node *root){
    if(root == NULL){
        return;
    }

    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
}

//Print Level Order - BFS Traversal
/*
Expected Output
1
2 3
4 5 6
7
*/
void levelOrderTraversal(Node* root){
    //taking node * so that address of nodes can be maintained
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        if(temp == NULL){
            cout<<endl;
            q.pop();
            //inserting a new null for the next level
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    return;
}

//build a tree from a level order input, -1 in input represents null
//Input: 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1 
Node* LevelOrderBuild(){
    int d;
    cin>>d;

    Node* root = new Node(d);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();

        int c1,c2;
        if(c1!=-1){
            current->left = new Node(c1);
            q.push(current->left);
        }
        if(c2!=-1){
            current->right = new Node(c2);
            q.push(current->right);
        }
    }

    return root;
}

//getting height
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    
    return 1 + max(h1,h2);
}

int main()
{
    Node * root = buildTree();
    printPreOrder(root);
    cout<<endl;
    printInOrder(root);
    cout<<endl;
    printPostOrder(root);
    cout<<endl;
    levelOrderTraversal(root);

    //building from level order
    Node* root1 = LevelOrderBuild();
    levelOrderTraversal(root1);
 return 0;
}