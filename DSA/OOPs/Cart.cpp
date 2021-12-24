#include<iostream>
#include<vector>
#include "datamodel.h"
using namespace std;

vector<Product> allProducts = {
    Product(1,"apple",26),
    Product(2,"mango",16),
    Product(3,"guava",36),
    Product(4,"banana",56),
    Product(5,"strawberry",29),
    Product(6,"pineapple",20),

};

//Creating pointer function for product class to choose product from given vector
Product* chooseProduct(){
    //Displaying the list of products
    string productList;
    cout<<"\n---- Available Products----"<<endl;
    for(auto pr: allProducts){
        productList.append(pr.getDisplayName());
    }
    cout<<productList<<endl;

    cout<<"---------------------------"<<endl;
    string choice;
    cin>>choice;

    for(int i = 0 ; i < allProducts.size() ; i++){
        if(allProducts[i].getShortName() == choice){
            return &allProducts[i];
        }
    }

    cout<<"\nProduct Not Found!!"<<endl;
    return NULL;
}
bool checkout(Cart &cart){
    if(cart.isEmpty()){
        return false;
    }

    int total = cart.getTotal();
    cout<<"\nPay in Cash"<<endl;

    int paid;
    cin>>paid;

    if(paid >= total){
        cout<<"Change: "<<paid - total<<endl;
        cout<<"Thank You for Shopping!!"<<endl;
        return true;
    }
    else{
        cout<<"Not enough Cash"<<endl;
        return false;
    }
}
int main()
{
    /* Product p(1,"Apple",26);
    cout<<p.getDisplayName()<<endl;

    Item fruit(p,3);
    cout<<fruit.getItemInfo(); */

    char action;
    Cart cart; 

    while (true)
    {
        cout<<"Select an Action - (a)dd item , (v)iew cart , (c)heckout : ";
        cin>>action;

        if(action == 'a'){
            //ToDo: Add to cart
            // View all product and add to the cart
            Product * pro = chooseProduct();
            if(pro!=NULL){
                cout<<"Added to the cart "<<pro->getDisplayName()<<endl;
                cart.addProduct(*pro);
            }

        }
        else if (action == 'v')
        {
            //view the cart
            cout<<"\n---------------\n";
            cout<<cart.viewCart();
            cout<<"\n---------------"<<endl;

        }
        else{
            //checkout
            cart.viewCart();
            if(checkout(cart)){
                break;
            }
            
        }
        
    }
    
 return 0;
}