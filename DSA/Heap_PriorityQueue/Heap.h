/*
Heap - Priority Queue
-> Binary Tree
-> Complete Binary Tree.
-> Heap Order Property - Parent must be greater than equal to children.
->Heap doesn't form a sorted array.

Array would be used, if parent at i then it's children will be at 2*i and 2*i + 1.

Insert, Push , Get
*/
#include<vector>
using namespace std;
class heap{
    vector<int> v;

    void heapify(int i){
        int left = 2*i;
        int right = 2*i + 1;
        int minIdx = i;

        if(left<v.size() and v[left] < v[i]){
            minIdx = left;
        }
        if(right<v.size() and v[right] < v[i]){
            minIdx = right;
        }

        if(minIdx != i){
            swap(v[i],v[minIdx]);
            heapify(minIdx);
        }
    }


    public:
        heap(int default_size=10){
            v.reserve(default_size+1);
            v.push_back(-1);
        }

        //to insert element
        void push(int data){
            //add data into last position
            v.push_back(data);

            //Swapping till above where required
            int index = v.size() - 1;
            int parent = index/2;

            while(index>1 and v[index] < v[parent]){
                swap(v[index],v[parent]);
                index = parent;
                parent = parent/2;
            }
        }

        //return minimum element
        int top(){
            return v[1];
        }
        //remove minimum element
        void pop(){
            // 1. Swap first and last element and pop last element
            int idx = v.size() - 1;
            swap(v[1],v[idx]);
            v.pop_back();
            heapify(1);
        }

        bool IsEmpty(){
            return v.size() == 1;
        }

};