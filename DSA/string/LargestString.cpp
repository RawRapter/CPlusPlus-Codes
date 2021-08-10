#include<iostream>
#include<cstring>
using namespace std;
/*Problem Statement: Read N strings and print the largest string. Each string can have upto 50 Characters*/
int main()
{
    int n;
    char largeststring[50],sentence[50];
    int largest = 0;
    cout<<"Enter the number of strings you want to input"<<endl;
    cin>>n;
    cin.get(); //to consume first \n, if not written first \n will be taken as first sentence
    while(n--){
        cin.getline(sentence,50);
        int len = strlen(sentence);
        if(len > largest){
            largest = len;
            strcpy(largeststring,sentence);
        }
    }
    cout<<"Largest String is: "<<largeststring<<endl;
 return 0;
}