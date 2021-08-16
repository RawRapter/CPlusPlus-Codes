/*Multilevel inheritence triangle*/
#include <iostream>

using namespace std;
//Parent Class
class Triangle{
	public:
		void triangle(){
			cout<<"I am a triangle\n";
		}
};
// Child of parent
class Isosceles : public Triangle{
  	public:
  		void isosceles(){
    		cout<<"I am an isosceles triangle\n";
  		}
};

//Child of child
class Equilateral : public Isosceles{
    public:
        void equilateral(){
            cout<<"I am an equilateral triangle\n";
        }
};

int main(){
    //creating object and calling functions 
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}
