#include<iostream>
#include<string.h>
using namespace std;

/*Shopping Cart*/

class Product
{
private:
    int id;
    char *name;
    int mrp;
    int selling_price;

public:
    //Setters
    void setMRP(int price){
        mrp = price;
    }
    void setSellingPrice(int price){
        if(price > mrp)
        selling_price = mrp;
        else
        selling_price = price;
    }
    //getters
    int getMRP(){
        return mrp;
    }
    int getSellingPrice(){
        return selling_price;
    }
    //base constructor
    Product(){

    }
    //constructor overloading
    /*
    We need to define our copy constructor only if an object has pointers to dynamically
    allocated objects , i.e a deep copy of object is needed.
    */
    Product(int id, char *n, int mrp, int selling_price){
        this->id = id;
        this-> mrp = mrp;
        this->selling_price=selling_price;
        name = new char[strlen(n)+1]; //allocating memory
        strcpy(name,n);
    }
    //copy consructor
    Product(Product &X){
        id = X.id;
        mrp = X.mrp;
        selling_price = X.selling_price;
        name = new char[strlen(X.name)+1];
        strcpy(name,X.name);
    }
    //copy assignment operator
    void operator=(Product &X){
        //creating deep copy
        id = X.id;
        mrp = X.mrp;
        selling_price = X.selling_price;
        name = new char[strlen(X.name)+1];
        strcpy(name,X.name);
    }
    
    //destructor
    /*function that is called automatically when an object is destroyed i.e. object goes out of scope or destroyed
    explicitly by calling delete
    compiler provides a default constructor
    user defined constructor is needed when class contains pointers to dynamically allocated mempry*/
    ~Product(){
        cout<<"Deleting: "<<name<<endl;
        if (name!=NULL)
        {
            delete []name;
            name = NULL;
        }
        
    }

    void show_details(){
        cout<<endl<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"MRP: "<<mrp<<endl;
        cout<<"Selling Price: "<<selling_price<<endl;
        cout<<"----------------------";
    }
};


int main()
{
    Product camera;
    Product camera1(101,"GoPro",2500,200);

    //copy constructor usage which is by default generally , two ways
    Product webcam(camera);
    Product handcam = camera;

    camera1 = handcam; //for copy assignment operator

    camera.show_details();
    webcam.show_details();
    handcam.show_details();

    //camera.mrp = 100;
    //camera.selling_price = 50;
    cout<<sizeof(camera)<<endl;
    //cout<<"MRP: "<<camera.mrp;
    //cout<<"Selling Price: "<<camera.selling_price;


    camera.setMRP(100);
    camera.setSellingPrice(50);
    cout<<"MRP: "<<camera.getMRP()<<endl;;
    cout<<"Selling Price: "<<camera.getSellingPrice();
    

 return 0;
}