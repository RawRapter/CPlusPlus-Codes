#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Class AddElements here*/
template<class T>
class AddElements{
  T a;
  public:
  AddElements(T x){ 
      a = x;
  }
  T add(T b){
      return (a + b);
  }
  T concatenate(T b){
      return (a + b);
  }
};
// for speeding up
int start_up(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
#define endl '\n';
// peeding up code end here

int main () {
  int n,i;
  // Input number of operations
  cin >> n;
  for(i=0;i<n;i++) {
    // Inputing Command, which can be any of these dtype: Float, int or string
    string type;
    cin >> type;
    //when float numbers to be provided
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    //when int number to be provided
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    //when string is provided
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
    else
    cout<<"Wrong Input Provided";
  }
  return 0;
}
