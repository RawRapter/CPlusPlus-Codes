#include <iostream>
#include <sstream>
using namespace std;

class Student{
    //declaring variables
    int age,standard;
    string first_name,last_name,str;
    
    //declaring functions set and get for all variables.
    public:
    void set_age(int a){
        age = a;
    }
    void set_standard(int a){
        standard = a;
    }
    void set_first_name(string a){
        first_name = a;
    }
    void set_last_name(string a){
        last_name = a;
    }
    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }
    string to_string(){
        //to get the inputs in form of stream.
        stringstream str1;
        str1<<age<<","<<first_name<<","<<last_name<<","<<standard;
        return str1.str();
    }
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    //taking inputs for all variables
    cin >> age >> first_name >> last_name >> standard;
    
    //setting it to the class
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    //getting them from class
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}