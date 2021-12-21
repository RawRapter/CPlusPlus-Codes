/*
Dijkshtra's Algorithm
- Weighted Graph
- Single Source Shortest Paths
- all the edges can have different weights.

- We would be using set to keep the nodes sorted as per the distance.
- sorted in ascending order.
- set is going to store the pair , the node and the min distance. That would be changed over each iteration.

Acronym:
nbrs - neigbours
*/
#include<iostream>
#include<list>
#include<cstring>
#include<vector>
#include<set>
#include<climits>
using namespace std;

class Graph{
    int V;
    list<pair<int,int>> *l;

    public:
        Graph(int V){
            this->V = V;
            l = new list<pair<int,int>>[V];
        }
        void addEdge(int i, int j, int wt, bool undir = true){
            l[i].push_back({wt,j});
            if(undir){
                l[j].push_back({wt,i});
            }
        }

        int dijkstra(int src, int dest){

            //Datastructres
            vector<int> dist(V,INT_MAX); // maintaining distance vector
            set<pair<int,int>> s;

            // 1. Intializing distance
            dist[src] = 0;
            s.insert({0,src});

            while(!s.empty()){
                auto it = s.begin(); //making iterator to iterate over set

                int node = it->second;
                int distTillNow = it->first;

                s.erase(it); //popping the first data

                //Now, iterating over the nbrs of the node
                for(auto nbrPair : l[node]){
                    int nbr = nbrPair.second;
                    int currentEdge = nbrPair.first;

                    //comparing the new distance (distTillNow + edge) with the distance vector
                    if(distTillNow + currentEdge < dist[nbr]){
                        //remove the data from set if already exists
                        auto f = s.find({dist[nbr],nbr});
                        if(f!=s.end()){
                            s.erase(f);
                        }

                        //update the path and insert the data into the set
                        dist[nbr] = distTillNow + currentEdge;
                        s.insert({dist[nbr],nbr});
                    }
                }
            }

            //Single source distance to all the paths
            for(int i = 0; i < V ; i++){
                cout<<"Node "<<i<<"'s Distance: "<<dist[i]<<endl;
            }

            cout<<"Distance from source to the destination is ";
            return dist[dest]; //returning distance of destination
        }
        
};
int main()
{
    Graph g(5);

    g.addEdge(0,1,1);
    g.addEdge(1,2,2);
    g.addEdge(0,2,4);
    g.addEdge(0,3,7);
    g.addEdge(3,2,2);
    g.addEdge(3,4,3);

    cout<<g.dijkstra(0,4)<<endl;

 return 0;
}