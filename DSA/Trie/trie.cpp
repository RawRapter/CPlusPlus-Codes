/*
Prefix Trie Data Structure
- generic tree like data structure
- efficient information retrieval data structure
- searches in optimal time O(Key Length) but uses extra storage

Important Operations:
- Insert a New Word
- Search for a given word
- Deletion

Sample Problem example why we use trie
Given a list of strings and q queries , each queries containing a word , you have to tell whether
the word is contained in the list or not.

Sample Input:
Words[] = {"Apple","ape","mangoes","news","no"}
Queries[] = {"Apple","Banana","New","Mango"}

Sample Output:
Yes, No, No, Yes
*/
#include<iostream>
#include "trie.h"
using namespace std;

int main()
{
    string Words[] = {"Apple","ape","mangoes","news","no"};
    string key;
    Trie T;
    for(auto word: Words){
        T.insert(word);
    }
    cin>>key;

    cout<<T.search(key)<<endl;

 return 0;
}