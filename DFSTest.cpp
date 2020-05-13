#include <iostream>
#include <list>
#include<queue>
 using namespace std;

class Graph
{
  public:
  int n;
  list<int>* adj;
  Graph(int n);
  void BFS(int v);
  void addEdge(int u, int v);
  void BFSUtil(int v, bool* isvisited);
    
};

Graph::Graph(int n)
{
    this->n = n;
    adj = new list<int>[n];    
}
void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void Graph::BFSUtil(int v, bool isvisited[])
{
    list<int> BFS;
    BFS.push_back(v);

    while(!BFS.empty())
    {
        int vert = BFS.front();
        BFS.pop_front();

        if(isvisited[vert] == false)
        {
            isvisited[vert] = true;
            cout<<" Vertex :: "<<vert<<" ";
        }
            
        list<int>::iterator itr = adj[vert].begin();
        
        for(;itr!= adj[vert].end();itr++)
        {
            if(isvisited[*itr] == false)
            {
                BFS.push_back(*itr);
            }
        }   
    }
}
void  Graph::BFS(int v)
{
    bool* isvisited = new bool[n];
    
    for(int i=0;i<n;i++)
    {
        isvisited[i] = false;
    }
    
    
    if(isvisited[v] == false)
    {
        BFSUtil(v, isvisited);
    }
    
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
    g.BFS(2);
}