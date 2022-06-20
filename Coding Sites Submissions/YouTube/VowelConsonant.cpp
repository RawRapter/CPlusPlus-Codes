#include<iostream>
using namespace std;
/*Write a program to find whether a given character is a vowel or a
consonant.*/
void vowelcheck(char c){
    if(!isalpha(c))
    cout<<"Please Enter a Character only"<<endl;
    else if(c == 'a' || c =='e' || c =='i' || c =='o' || c =='u' || c =='A' || c =='E' || c =='I' || c =='O' || c =='U')
    cout<<"It's a vowel"<<endl;
    else
    cout<<"It's a consonant"<<endl;
}
int main()
{
    char c;
    cin>>c;

    vowelcheck(c);
 return 0;
}