#include<iostream>
#include<vector>
using namespace std;
/*Merge Sort*/
void merge(vector<int> &arr,int s,int e){
    int i = s;
    int mid = (s+e)/2;
    int j = mid+1;
    vector<int> temp;
    while(i<=mid and j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }

    }

    //Copying remaing elements from first array
    while(i<=mid)
    temp.push_back(arr[i++]);
    //or copying remaining elements from second array
    while(j<=e)
    temp.push_back(arr[j++]);

    //copy back elements from temp to original array
    int k=0;
    for(int idx=s;idx<=e;idx++){
        arr[idx] = temp[k++];
    }
    return;
}

void mergesort(vector<int> &arr,int s, int e){
    //Base Case
    if(s>=e)
    return;
    //Recurive case
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    return merge(arr,s,e);

}
int main()
{
    vector<int> arr{10,5,2,0,7,6,4};
    int s=0;
    int e=arr.size()-1;
    mergesort(arr,s,e);
    for(int x: arr){
        cout<<x<<" ";
    }
 return 0;
}