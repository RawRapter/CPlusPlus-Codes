#include<iostream>
using namespace std;
/*Pass By Reference using reference variable*/
void apply_tax(int &income){
    int tax = 0.10;
    income = (1-tax)*income;
}
/*Pass By reference using dereference variable*/
void watch_video(int *views){
    *views = *views + 1;
}
int main()
{
    //For reference variable
    int income;
    cin>>income;
    apply_tax(income);
    cout<<income<<endl;

    //For Pointers
    int views = 100;
    watch_video(&views);
    cout<<views<<endl;
 return 0;
}