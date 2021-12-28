#include<iostream>
using namespace std;
/*Pointer Practice
&Bucket = Address
*address = bucket
*(&x) = x
Dereference operator *
An Interesting property of pointer is that they can be used to access the variable they point to directly.
This is done by preceding the pointer name with the dereference operator(*). The Operator can itself can
be read as "value pointed to by"

*/
int main()
{
    int x = 10;
    float y = 5.5;
    cout<<&x<<endl;

    //Pointer
    int *xptr=&x;
    //Address stored in pointer
    cout<<xptr<<endl;
    //Pointer Address
    cout<<&xptr<<endl;

    //Pointer to Pointer
    int**xxptr=&xptr;
    cout<<xxptr<<endl;

    /*Null Pointer*/
    int *p = 0;
    int *q = NULL;
    // they cannot be accessed , it will result in segmenation fault

    /* Reference Variable & */
    int j = 10;
    int &k = j; //reference variable must be initialised
    // here j,k both are same
    //Changing one will make changes in both
 return 0;
}