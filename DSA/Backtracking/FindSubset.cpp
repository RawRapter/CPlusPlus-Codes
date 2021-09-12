#include<iostream>
#include<vector>
using namespace std;
/*Finding a subset of a given string*/
void findsubset(char *input, char *output, int i, int j){
    //Base Case
    if(input[i]=='\0')
    {
        output[j]='\0';
        
        //just to show null
        if(output[0]=='\0')
        cout<<"NULL";

        cout<<output<<endl;
        return;
    }
    //Rec Case
    //include the ith letter
    output[j] = input[i];
    findsubset(input,output,i+1,j+1);
    //exclude the ith letter
    // here overwriting
    findsubset(input,output,i+1,j);

}
int main()
{
    char input[50];
    char output[50];
    cin>>input;
    findsubset(input,output,0,0);

 return 0;
}