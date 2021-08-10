#include<iostream>
#include<cstring>
using namespace std;
/*Given a sentence count number of character, spaces and digits*/
int main()
{
    //we can either sotre and count or read and count
    //reading
    char ch;
    ch = cin.get();
    int alpha=0,digit=0,space=0;
    while (ch != '\n')
    {
        if(ch>='0' and ch <= '9')
        digit++;
        else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z'))
        alpha++;
        else if(ch==' ' or ch=='\t')
        space++;
        ch = cin.get();
    }
    cout<<digit<<endl;
    cout<<alpha<<endl;
    cout<<space<<endl;
    
 return 0;
}