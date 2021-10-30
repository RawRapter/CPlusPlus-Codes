#include<iostream>
#include<queue>
using namespace std;
/*Stack using 2 Queues*/

class stack{
    queue<int> q1,q2;
    public:
        void push(int x){
            //inserting in non empty queue
            if(!q1.empty()){
                q1.push(x);
            }
            else
                q2.push(x);
        }
        void pop(){
            if(q1.empty()){
                //shift element from q2 to q1
                while(!q2.empty()){
                    int front = q2.front();
                    q2.pop();

                    if(q2.empty()){
                        break;
                    }
                    q1.push(front);
                }
            }
            else{
                while(!q1.empty()){
                    int front = q1.front();
                    q1.pop();

                    if(q1.empty()){
                        break;
                    }
                    q2.push(front);
                }
            }
        }
        int top(){
            if(q1.empty())
            {
                //shift element from q2 to q1
                while(!q2.empty())
                {
                    int front = q2.front();
                    q2.pop();

                    
                    q1.push(front);
                    if(q2.empty())
                    {
                        return front;
                    }
                }
            }
            else
            {
                while(!q1.empty())
                {
                    int front = q1.front();
                    q1.pop();

                    
                    q2.push(front);
                    if(q1.empty())
                    {
                        return front;
                    }   
                }
            }
        }
        bool empty()
        {
		    return q1.empty() and q2.empty();
	    }
};
int main()
{
    stack s;
	s.push(1);
	s.push(2);
	s.pop();
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.pop();


	while(!s.empty()){
		cout << s.top()<<endl;
		s.pop();
	}

	return 0;
 return 0;
}