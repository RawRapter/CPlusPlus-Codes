#include<iostream>
#include "Heap.h"
using namespace std;
int main()
{
    int n,h;
    heap hh;
    cout<<"Enter number of elment to be inserted: "<<endl;
    cin>>n;

    cout<<"Enter elements to insert them: "<<endl;
    for(int i=0;i<n;i++){
        cin>>h;
        hh.push(h);
    }
    
    cout<<"Returning minimum element: "<<hh.top()<<endl;

    cout<<"Displaying all element(In Level Order): "<<endl;
    while(!hh.IsEmpty()){
        cout<<hh.top()<<endl;
        hh.pop();
    }
 return 0;
}