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

// Calculating Diameter of tree i.e. Max distance between 2 nodes
// Time Complrxity O(N^2)
int diameter(Node* root){
    //BaseCase
    if(root == NULL)
    return 0;

    //recursive case
    int D1 = height(root->left) + height(root->right);
    int D2 = diameter(root->left);
    int D3 = diameter(root->right);

    return max(D1,max(D2,D3));

}

//Diameter Optimised
class HDPair{
    public:
        int height;
        int diameter;
};
HDPair optDiameter(Node* root){
    HDPair p;
    if(root == NULL){
        p.height = p.diameter = 0;
        return p;
    }

    //rec
    HDPair Left = optDiameter(root->left);
    HDPair Right = optDiameter(root->right);

    p.height = max(Left.height,Right.height) + 1;

    int D1 = Left.height + Right.height;
    int D2 = Left.diameter;
    int D3 = Right.diameter;

    p.diameter = max(D1,max(D2,D3));

    return p;
}

//Sum of all nodes
int sumBT(Node* root)
{
    if(root==NULL)
    return 0;
    
    return root->data + sumBT(root->left) + sumBT(root->right);
}

//Minimum Depth of a tree
int minDepth(Node *root) {
        if(root == NULL)
            return 0;
            
        return 1 + min(minDepth(root->left),minDepth(root->right));
        
}

int main()
{
    Node * root = buildTree();
    cout<<"PreOrder Traversal: ";
    printPreOrder(root);
    cout<<endl;
    cout<<"InOrder Traversal: ";
    printInOrder(root);
    cout<<endl;
    cout<<"PostOrder Traversal: ";
    printPostOrder(root);
    cout<<endl;
    cout<<"Level Order Traversal: ";
    levelOrderTraversal(root);

    //building from level order
    Node* root1 = LevelOrderBuild();
    levelOrderTraversal(root1);
    cout<<endl;

    //Diameter of tree
    cout<<"Diameter: "<<diameter(root)<<endl;

    //Optimised Diameter
    cout<<"Optimised Diameter: "<<optDiameter(root).diameter<<endl;

 return 0;
}