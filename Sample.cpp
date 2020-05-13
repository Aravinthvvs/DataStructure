#include<iostream>
#include <iterator>
#include <list>
using namespace std;
class Graph
{
    int noOfVertices;

    list<int> *adj;

    void DFSUtil(int vertex, bool isVisited[]);
    

public:
    Graph(int noOfVertices);
    void addEdges(int u, int v);
    void DFS();
    
};

Graph::Graph(int noOfVertices)
{
    this->noOfVertices = noOfVertices;
    adj = new list<int>[noOfVertices];
}

void Graph::addEdges(int u, int v)
{
    adj[u].push_back(v);
}

void Graph::DFSUtil(int vertex, bool isVisited[])
{
    isVisited[vertex] = true;
    cout<<vertex<<" ";
    list<int>::iterator itr = adj[vertex].begin();

    for(;itr!= adj[vertex].end();++itr)
    {
        if(isVisited[*itr] == false)
        {
            DFSUtil(*itr,isVisited);
        }
    }
}

void Graph::DFS()
{
    bool *isVisited = new bool[this->noOfVertices];

    for (int i =0 ; i<this->noOfVertices; i++)
    {
        isVisited[i] = false;
    }

    for(int j = 0; j < this->noOfVertices; j++)
    {
        if(isVisited[j] == false)
        {
            DFSUtil(j,isVisited);
        }
    }
}

int main()
{
    Graph graph(4);
    graph.addEdges(0,1);
    graph.addEdges(0,2);
    graph.addEdges(1,2);
    graph.addEdges(2,0);
    graph.addEdges(2,3);
    graph.addEdges(3,3);
    graph.addEdges(3,1);

    graph.DFS();
}