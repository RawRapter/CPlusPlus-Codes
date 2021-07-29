/*Print the sum of the three numbers on a single line.*/
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> a;
    int ele,result;
    for (int i=0; i<3; i++) {
    cin>>ele;
    a.push_back(ele);
    }
    for (int i=0; i<a.size(); i++) {
    result += a[i];
    }
    cout<<result;
    return 0;
}
