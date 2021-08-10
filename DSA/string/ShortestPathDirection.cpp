#include<iostream>
#include<vector>
using namespace std;
/*Find Displacement: Given a long string containing N,S,E,W directions,
find the shortest path to reach the location
Sample Input: SNNNEWE
Sample Output: NNE
*/
int main()
{
    int x=0,y=0;
    char route[100];
    cout<<"Enter the path (N,E,W,S)"<<endl;
    cin.getline(route,100);
    for (int i = 0; route[i] != '\0'; i++)
    {
        switch (route[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        
        default:
            break;
        }
    }
    cout<<"Coordinates X and Y are: ("<<x<<","<<y<<")"<<endl;
    cout<<"Shortest Path is:"<<endl;
    if (x>=0 and y>=0)
    {
        while(y--){
            cout<<"N";
        }
        while (x--)
        {
            cout<<"E";
        }
    }
    else if(x<=0 and y<= 0){
        while(y++){
            cout<<"S";
        }
        while (x++)
        {
            cout<<"W";
        }
    }
    else if(x<=0 and y>= 0){
        while(y--){
            cout<<"N";
        }
        while (x++)
        {
            cout<<"W";
        }
    }
    else if(x>=0 and y<= 0){
        while(y++){
            cout<<"S";
        }
        while (x--)
        {
            cout<<"E";
        }
    }
    else
    cout<<"OOps";

    
 return 0;
}