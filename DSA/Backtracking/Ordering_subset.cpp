#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*Finding a subset of a given string in ordered format*/

bool compare(string x, string y){
    if(x.length() == y.length()){
        return x<y; //lexicographical order
    }
    return x.length() < y.length();
}
void findsubset(char *input, char *output, int i, int j,vector<string> &v){
    //Base Case
    if(input[i]=='\0')
    {
        output[j]='\0';
        string temp(output);
        v.push_back(temp);
        return;
    }
    //Rec Case
    //include the ith letter
    output[j] = input[i];
    findsubset(input,output,i+1,j+1,v);
    //exclude the ith letter
    // here overwriting
    findsubset(input,output,i+1,j,v);

}
int main()
{
    char input[50];
    char output[50];
    vector<string> list;
    cin>>input;

    
    findsubset(input,output,0,0,list);
    sort(list.begin(),list.end(),compare);
    
    for(auto s: list){
        cout<<s<<",";
    }

 return 0;
}