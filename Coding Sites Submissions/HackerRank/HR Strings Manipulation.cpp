#include <iostream>
#include <string>
using namespace std;

int main() {
	// String program to concatenate two string and interchange their first character
    string s1,s2;
    char c1,c2;
    cin>>s1>>s2;
    c1 = s1[0];
    c2 = s2[0];
    cout<<s1.length()<<" "<<s2.length()<<endl;
    cout<<s1+s2<<endl;
    s1[0]=c2;
    s2[0]=c1;
    cout<<s1<<" "<<s2;
    return 0;
}

/*
Input:
abcd
ef

Output:
4 2
abcdef
ebcd af
*/