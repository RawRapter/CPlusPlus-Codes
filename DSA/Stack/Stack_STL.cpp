#include<iostream>
#include<stack>
using namespace std;
/*Stack*/

void insertAtBottom(stack<int> &s, int data){
    //base
    if(s.empty()){
        s.push(data);
        return;
    }
    //recursive case
    int temp = s.top();
    s.pop();

    insertAtBottom(s,data);
    s.push(temp);
}   

void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }

    int t = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,t);
}

int main()
{
    stack<string> books;

	books.push("C++");
	books.push("Java");
	books.push("Python");
	books.push("OS");

	while(!books.empty()){
		cout << books.top() <<endl;
		books.pop();
	}

    stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	insertAtBottom(s,5);
	//reverse(s);

	while(!s.empty()){
		cout<< s.top() <<endl;
		s.pop();
	}
 return 0;
}