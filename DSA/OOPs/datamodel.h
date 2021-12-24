#include<string>
#include<unordered_map>
using namespace std;

//declaration
class Item;
class Cart;


class Product{
    int id;
    string name;
    int price;

    public:
        Product(){}
        Product(int u_id, string name, int price){
            //Assignment
            id = u_id;
            this->name = name;
            this->price = price;
        }

        string getDisplayName(){
            return name + " : Rs " + to_string(price) + "\n";
        }
        string getShortName(){
            return name.substr(0,1);
        }
        friend class Item; //Such that class Item can access private members of Product class
        friend class Cart;
};

class Item{
    Product product;
    int quantity;

    public:
    Item(){}
    //Intialization list (another way like assignment)
    Item(Product p, int q):product(p),quantity(q){};
    int getItemPrice(){
        return quantity * product.price;
    }

    string getItemInfo(){
        return to_string(quantity) + "x" + product.name + " Rs. " + to_string(quantity * product.price) + "\n";
    }
    friend class Cart;

};

class Cart{
    unordered_map<int,Item> items;

    public:
        void addProduct(Product product){
            //new item to cart
            if(items.count(product.id) == 0){
                Item newItem(product,1);
                items[product.id] = newItem;
            }
            else{
                items[product.id].quantity += 1;
            }
        }

        int getTotal(){
            int total = 0;
            for(auto calc: items){
                auto item = calc.second;
                total += item.getItemPrice();
            }
            return total;
        }

        string viewCart(){
            if(items.empty()){
                return "\nCart is Empty!! \n";
            }

            string itemizedList;
            int cartTotal = getTotal();

            for(auto itemPair: items){
                auto item = itemPair.second;
                itemizedList.append(item.getItemInfo());
            }
            return itemizedList + "\nTotal Amount: Rs. " + to_string(cartTotal) + "\n";
        }

        bool isEmpty(){
            return items.empty();
        }

};