/*
It is modified BFS using for topological ordering.
We calculate indegree for every node
*/
#include<iostream>
#include<list>
#include<queue>
#include<cstring>
#include<vector>
using namespace std;

class Graph{
    int V;
    list<int> *l;

    public:
        Graph(int V){
            this->V = V;
            l = new list<int>[V];
        }
        void addEdge(int i, int j){
            l[i].push_back(j);
        }

        void topologicalSort(){
            vector<int> indegree(V,0);

            //Iterating over all the edges to find the indegree
            for(int i = 0; i < V ; i++){
                for(auto nbr: l[i]){
                    indegree[nbr]++;
                }
            }

            //BFS logic for indegree queue
            queue<int> q;

            //initing the queue with nodes with indegree 0
            for(int i = 0; i < V ; i++){
                if(indegree[i] == 0){
                    q.push(i);
                }
            }

            //Popping elements from queue and inserting nbrs for next iteration popping
            while (!q.empty())
            {
                int node = q.front();
                cout<<node<<" ";
                q.pop();

                //iterating over the nbrs of this node and reducing their indegree by 1
                for(auto nbrs: l[node]){
                    indegree[nbrs]--;

                    if(indegree[nbrs]==0)
                    q.push(nbrs);
                }
            }
            

        }
};
int main()
{
    Graph g(6);

    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(4,5);
    g.addEdge(1,4);
    g.addEdge(1,2);

    g.topologicalSort();

 return 0;
}