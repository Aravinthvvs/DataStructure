#include<iostream>
#include<stack>
#include<vector>
#include <list>

using namespace std;

class Graph
{

int noOfVertices;
list<int> *adj;

public:
    Graph(int n);
    void addEdge(int u, int v);
    void DFS();
    void DFSUtil(int StartVertex, vector<bool> &isVisited);
};

Graph::Graph(int n)
{
    this->noOfVertices = n;
    adj = new list<int>[noOfVertices];
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void Graph::DFSUtil(int StartVertex,vector <bool> &isVisited)
{
    

    stack<int> stk;

    stk.push(StartVertex);

    while(!stk.empty())
    {
        int vertex = stk.top();
        stk.pop();

        if(isVisited[vertex] == false)
        {
            cout<<vertex<<" ";
            isVisited[vertex] = true;
        }
        list<int> :: iterator i;
        for(i = adj[vertex].begin();i != adj[vertex].end();i++)
        {
            if(isVisited[*i] == false)
            {
                stk.push(*i);
            }
        }
    }
    
}

void Graph::DFS()
{
    vector<bool> isVisited (this->noOfVertices,false);

    for (int i=0;i<this->noOfVertices;i++)
    {
        if(isVisited[i] == false)
        {
            DFSUtil(i,isVisited);
        }
    }
}

int main()
{
    Graph g(5); // Total 5 vertices in graph 
    g.addEdge(1, 0); 
    g.addEdge(0, 2); 
    g.addEdge(2, 1); 
    g.addEdge(0, 3); 
    g.addEdge(1, 4); 

    g.DFS();
}