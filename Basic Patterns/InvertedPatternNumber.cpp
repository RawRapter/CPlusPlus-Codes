#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = n; i >=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

/* 
Another Way
for(int i = 1; i<=n: i++)
{
    for(int j=1;j<=n+1-i:j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
*/

/* This is for SQL Inverted triangle
set @num = 21;
select repeat('* ', @num := @num - 1) from information_schema.tables
limit 20;

euclidian
select round(sqrt(((max(lat_n)-min(lat_n))*(max(lat_n)-min(lat_n)))+((max(long_w)-min(long_w))*(max(long_w)-min(long_w)))),4)
from station;

median
select round(a.lat_n,4) from station a
where (select count(lat_n) from station where lat_n < a.lat_n)=(select count(lat_n) from station where lat_n > a.lat_n);

binary tree nodes
select n,if(P is null,"Root",if((SELECT COUNT(*) FROM BST WHERE P=B.N)>0,"Inner","Leaf"))
from bst b
order by n;
*/