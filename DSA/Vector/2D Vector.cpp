#include<iostream>
#include<vector>
using namespace std;
/*2D Vector*/
int main()
{
    // vector<vector<int>> dp(5,vector<int>(6,0)); 5 rows 6 columns all intialized to zero
    vector<vector<int>> arr = {{1,2,3}
                                ,{4,5,6}
                                ,{7,8,9,10}
                                ,{11,12}};
    //updating articular element
    arr[0][0]+=10;
    
    //printing all elements
    for (int i = 0; i < arr.size(); i++)
    {
        for(int num: arr[i]){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    
 return 0;
}