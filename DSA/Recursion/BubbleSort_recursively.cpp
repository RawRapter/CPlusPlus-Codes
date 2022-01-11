#include<iostream>

using namespace std;
/*Bubble Sort recursively*/
bool compare(int a , int b){
    return a>b;
}

//only main loop recursive
void Bubble_sort_rec(int arr[],int n){
    //base case
    if(n==1)
    return;

    for(int j=0; j<=n-1; j++){
            if(compare(arr[j],arr[j+1])){
                swap(arr[j],arr[j+1]);
            }
    }
    Bubble_sort_rec(arr,n-1); // Outerloop has been exchanged by recursive code
}


//full recursive
void Bubble_sort_rec_1(int arr[],int n,int j){
    //base case
    if(n==1)
    return;
    if(j==n-1){
        Bubble_sort_rec_1(arr,n-1,0);
        return;
    }
    if(compare(arr[j],arr[j+1])){
        swap(arr[j],arr[j+1]);
    }
    Bubble_sort_rec_1(arr,n,j+1);
}

int main()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    Bubble_sort_rec(arr,n);
    for(auto x : arr){
        cout<<x<<", ";
    }
 return 0;
}