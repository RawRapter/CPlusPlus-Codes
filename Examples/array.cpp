#include<iostream>
#include<cstring>
using namespace std;
/*Array Basics*/
int main()
{
    char a[] = {'a','b','c','d','\0'};
    char b[] = "abc";
    char c[50];
    char d[50];
    char e[50]="anant",f[50],g[50]="anant";
    
    //Printing Arrays
    cout<<a<<endl;
    cout<<b<<endl;

    cout<<strlen(a)<<endl;//number of characters, 4
    cout<<sizeof(a)<<endl;//includes null, 5

    //cin.get() reads one character at a time
    char temp = cin.get();
    int length = 0; // to check the length
    while (temp!='\n')
    {
        //c[length++] = temp; // you can also do thisinserting temp into array, removing below two lines
        length++;
        cout<<temp;
        temp = cin.get();
    }
    c[length]='\0';
    cout<<c<<endl;

    //using cin.getline(), it reads entire line
    cin.getline(d,50);
    //cin.getline(d,50,'.'); stop when . comes
    cout<<d<<endl;

    //strcpy
    strcpy(e,f);
    cout<<f;

    //compare
    cout<<strcmp(e,g)<<endl;

    //concatenate
    char web[]="www";
    char domain[]=".anant.com";
    cout<<strcat(web,domain)<<endl;

 return 0;
}



/*IGNORE: SQL Query for prime number

select listagg(Prime_Number,'&') within group(order by Prime_Number)
from (select L Prime_Number from
     (select Level L 
     from Dual
     connect by Level <= 1000),
     (select Level M
     from Dual
     connect by Level <= 1000)
     where M <= L
     group by L
     having count(case when L/M = trunc(L/M) then 'Y' end) = 2
     order by L);

*/