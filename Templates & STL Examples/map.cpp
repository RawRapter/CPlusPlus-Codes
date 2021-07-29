#include<iostream>
#include<map>
#include<string>
using namespace std;
/*map*/
int main()
{
    map<string,int> mark;
    mark["anant"] = 100;
    mark["aaryan"] = 98;
    mark.insert({{"ishant",99},{"yash",97}});
    map<string,int>::iterator iter;
    for(iter = mark.begin();iter!=mark.end();iter++){
        cout<<(*iter).first<<" : "<<(*iter).second<<endl;
    }
 return 0;
}