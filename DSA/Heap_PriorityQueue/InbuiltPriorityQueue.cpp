#include<iostream>
#include<queue>
using namespace std;

//to make comparison(our own custom in place of greater)
class Compare{
    public:
        //Operator overloading
        bool operator()(int a, int b){
            return a > b;
        }
};

int main()
{
    int arr[] = {10,15,20,13,6,90};
    int n = sizeof(arr)/sizeof(int);

    priority_queue<int> heap; //this is max heap
    //min heap / reverse order
    priority_queue<int, vector<int>,greater<int>> heap1;
    priority_queue<int, vector<int>,Compare> heap2;


    for(int x: arr){
        heap.push(x);
    }

    while(!heap.empty()){
        cout<<heap.top()<<endl;
        heap.pop();
    }
 return 0;
}