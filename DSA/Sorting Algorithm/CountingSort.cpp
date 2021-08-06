#include<iostream>
#include<vector>
using namespace std;
/*Counting Sort*/
void counting_sort(int arr[],int n){
    // largest elemnt
    int largest = -1;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest,arr[i]);
    }
    //creating frequency vector
    vector<int> freq(largest+1,0);

    //updating frequency vector
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    //putting element from frquency vector to main array
    int j=0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i]>0)
        {
            arr[j]=i;
            freq[i]--;
            j++;
        }      
    }

    return;
}
int main()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    counting_sort(arr,n);
    for(auto x : arr){
        cout<<x<<", ";
    }
 return 0;
}