#include<iostream>
#include<string.h>
using namespace std;
/*
Name: Anant Arun || ID: 21205020 || M.tech 1st Year

Program: Create a dictionary that stores keywords and its meanings. The dictionary
should support the following functionalities:
a. User can add new keywords, delete keywords and update the values
of any entry.
b. Display the whole data sorted in alphabetical and reverse alphabetical ordere.

For this struct, class is used to create dictionary and it's words. And stored in Binary Search Tree structure.
*/

//Defining structure for node
typedef struct node
{
    //Keyword
    char k[20];
    //Meaning
    char m[20];
    //Left Link
    node  *left;
    //Right Link
    node * right;
}node;

//Creating dictionary class
//Here I am going to store dictionary in a Binary Search tree structure
class dict
{
//declaring root and functions
public:
 node *root;
 void create();
 void disp(node *);
 void insert(node * root,node *temp);
 int search(node *,char []);
 int update(node *,char []);
 node* del(node *,char []);
 node * min(node *);
};

//Function to create a tree
void dict :: create()
{
 class node *temp;
 int ch;
//going for first iteration
 do
 {
  temp = new node;
  cout<<"\nEnter Keyword: ";
  cin>>temp->k;
  cout<<"\nEnter Meaning: ";
  cin>>temp->m;

  temp->left = NULL;
  temp->right = NULL;
  //if root node is null
  if(root == NULL)
  {
   root = temp;
  }
  //if root node is not null
  else
  {
   insert(root, temp);
  }
  cout<<"\nDo u want to add more (y=1/n=0): ";
  cin>>ch;
 }//exits program when 1 not selected
 while(ch == 1);

}

void dict ::  insert(node * root,node *temp)
{
  //going on left of tree if key is smaller
 if(strcmp (temp->k, root->k) < 0 )
 {
  if(root->left == NULL)
   root->left = temp;
  else
   insert(root->left,temp);
 }
 //going on right of tree if key is larger
 else
 { if(root->right == NULL)
   root->right = temp;
  else
   insert(root->right,temp);
 }

}

//Displaying data from top-down left-right
void dict:: disp(node * root)
{
 if( root != NULL)
 {
  disp(root->left);
  cout<<"\n Key Word: "<<root->k;
  cout<<" , Meaning: "<<root->m<<endl;
  disp(root->right);
 }
}

//Searching for data
int dict :: search(node * root,char k[20])
{
 int c=0;
 while(root != NULL)
 {
  c++;
  if(strcmp (k,root->k) == 0)
  {
   cout<<"\nNo of Comparisons: "<<c;
   return 1;
  }
  if(strcmp (k, root->k) < 0)
   root = root->left;
  if(strcmp (k, root->k) > 0)
   root = root->right;
 }

 return -1;
}

//updating the existing data
int dict :: update(node * root,char k[20])
{
 while(root != NULL)
 {
  if(strcmp (k,root->k) == 0)
  {
   cout<<"\nEnter New Meaning of Keyword "<<root->k<<endl;
   cin>>root->m;
   return 1;
  }
  if(strcmp (k, root->k) < 0)
   root = root->left;
  if(strcmp (k, root->k) > 0)
   root = root->right;
 }
 return -1;
}

//Deleting the node
node* dict :: del(node * root,char k[20])
{
 node *temp;

 if(root == NULL)
 {
  cout<<"\nElement No Found";
  return root;
 }

 if (strcmp(k,root->k) < 0)
 {
  root->left = del(root->left, k);
  return root;
 }
 if (strcmp(k,root->k) > 0)
 {
   root->right = del(root->right, k);
   return root;
 }

 if (root->right==NULL&&root->left==NULL)
 {
  temp = root;
  delete temp;
  return NULL;
  }
  if(root->right==NULL)
  {
  temp = root;
  root = root->left;
  delete temp;
  return root;
  }
  else if(root->left==NULL)
  {
  temp = root;
  root = root->right;
  delete temp;
  return root;
  }
  temp = min(root->right);
  strcpy(root->k,temp->k);
  root->right = del(root->right, temp->k);
  return root;

}

node * dict :: min(node *q)
{
 while(q->left != NULL)
 {
  q = q->left;
 }
 return q;
}



int main()
{
 int ch;
 dict d;
 d.root = NULL;


 do
 {
  cout<<"\nMenu\n1.Create\n2.Disp\n3.Search\n4.Update\n5.Delete\n6.Exit Program\nEnter your Choice: ";
  cin>>ch;

  switch(ch)
  {
case 1: d.create();
  break;
case 2: if(d.root == NULL)
  {
  cout<<"\nNo any Keyword"<<endl;
  }
  else
  {
  d.disp(d.root);
  }
  break;
case 3: if(d.root == NULL)
 {
  cout<<"\nDictionary is Empty. First add keywords then try again! "<<endl;
 }
  else
 {

  cout<<"\nEnter Keyword which u want to search: "<<endl;
  char k[20];
  cin>>k;

  if( d.search(d.root,k) == 1)
  cout<<"\nKeyword Found"<<endl;
  else
  cout<<"\nKeyword Not Found"<<endl;
 }
  break;
case 4:
  if(d.root == NULL)
  {
  cout<<"\nDictionary is Empty. First add keywords then try again "<<endl;
 }
  else
  {
  cout<<"\nEnter Keyword which meaning  want to update: ";
  char k[20];
  cin>>k;
  if(d.update(d.root,k) == 1)
  cout<<"\nMeaning Updated"<<endl;
  else
  cout<<"\nMeaning Not Found"<<endl;
  }
  break;
case 5:
  if(d.root == NULL)
  {
  cout<<"\nDictionary is Empty. First add keywords then try again "<<endl;
  }
  else
  {
  cout<<"\nEnter Keyword which u want to delete: ";
  char k[20];
  cin>>k;
  if(d.root == NULL)
  {
  cout<<"\n Keyword Not exists"<<endl;
  }
  else
  {
  d.root = d.del(d.root,k);
    }
   }
   break;

case 6:
    exit(0);
  }
 }
 while(ch<=6);
 return 0;

}