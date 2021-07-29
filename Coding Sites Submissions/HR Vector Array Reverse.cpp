/*Get the array in reverse*/
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n,ele;
    cin>>n;
    vector<int> arr;
    for (int i = 1; i <= n; i++) {
    cin>>ele;
    arr.push_back(ele);
    }
    vector<int>::reverse_iterator it1;
    for(it1 = arr.rbegin();it1!=arr.rend();it1++){
        cout<<*it1<<" ";
    }
    return 0;
}