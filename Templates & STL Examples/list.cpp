#include<iostream>
#include<list>
using namespace std;
/*List*/
void display(list<int> &l);
int main()
{
    list<int> l1;
    l1.push_back(2);
    l1.push_back(4);
    l1.push_back(1);
    l1.push_front(3);
    l1.push_front(9);
    cout<<"List Display first time"<<endl;
    display(l1);
    l1.sort();
    cout<<"After Sort"<<endl;
    display(l1);
    l1.pop_back();
    l1.pop_front();
    cout<<"After first and last element pop"<<endl;
    display(l1);
    cout<<"After reversing"<<endl;
    l1.reverse();
    display(l1);
 return 0;
}
void display(list<int> &l)
{
    list<int>::iterator it;
    for (it = l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}