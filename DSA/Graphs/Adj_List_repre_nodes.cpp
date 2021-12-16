#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
using namespace std;
/*Here, each node is representing city*/

class node{
    public:
        string name;
        list<string> nbrs;

    node(string name){
        this->name = name;

    }
};

class graph{
    //all nodes
    //hashmap(string,node*)
    unordered_map<string,node*> m;

    public:
        graph(vector<string> cities){
            for(auto city: cities){
                m[city] = new node(city);
            }
        }

        void addEdge(string x, string y, bool undir = false){
            m[x]->nbrs.push_back(y);
            if(undir){
                m[y]->nbrs.push_back(x);
            }
        }

        void printAdjCities(){
            for(auto citypair: m){
                auto city = citypair.first;
                cout<<city<<"->";
                node *nodes = citypair.second;
                for(auto nbr:nodes->nbrs){
                    cout<<nbr<<",";
                }
                cout<<endl;
            }
        }
};

int main()
{
    vector<string> cities={"Delhi","London","Paris","New York"};
    //creating object
    graph g(cities);

    //making edges
    g.addEdge("Delhi","London");
    g.addEdge("New York","London");
    g.addEdge("Delhi","Paris");
    g.addEdge("Paris","New York");

    g.printAdjCities();

 return 0;
}