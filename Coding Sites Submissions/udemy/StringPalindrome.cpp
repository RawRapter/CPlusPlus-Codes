#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int j = str.size()-1;
    int flag = 1;
    for(int i=0;i<str.size()/2;i++){
        if(str[i]==str[j]){
        flag = 1;
        j -= 1; 
        continue;}
        else{
        flag = 0;
        break;}
        
    }
    if(flag==1)
    return true;
    else
    return false;
}
int main(){
    string string = "abba";
    isPalindrome(string);
    //getline(cin,str);
}