#include<iostream>
#include<vector>
using namespace std;
/*Quick Sort*/
int partition(vector<int> &arr, int s, int e){
    int pivot = arr[e];
    int i = s-1;
    for(int j=s;j<=e;j++){
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],pivot);
    return i+1;
}
void Quicksort(vector<int> &arr, int s, int e){
    //Base Case
    if(s>=e)
    return;
    //Recurive case
    int p = partition(arr,s,e);
    Quicksort(arr,s,p-1);
    Quicksort(arr,p+1,e);
}
int main()
{
    vector<int> arr{10,5,2,0,7,6,4};
    int s=0;
    int e=arr.size()-1;
    Quicksort(arr,s,e);
    for(int x: arr){
        cout<<x<<" ";
    }
 return 0;
}