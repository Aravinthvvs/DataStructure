#include<bits/stdc++.h>
using namespace std;

class Graph
{
 public:   
    int vertexCount;
    vector<int> *adj;
    void addVertex(int u,int v);
    bool isPathReachable(int s,int d);
    Graph(int v)
    {
        vertexCount = v;
        adj = new vector<int>[v];
    }

};

void Graph::addVertex(int u, int v)
{
    adj[u].push_back(v);
}

bool Graph::isPathReachable(int s,int d)
{
    if(s == d)
    {
        return true;
    }
    bool *isVisited = new bool[vertexCount];

    for(auto i = 0;i<vertexCount;i++)
    {
        isVisited[i] = false;
    }
    queue<int> vertexQueue;

    isVisited[s] = true;
    vertexQueue.push(s);
    vector<int> ::iterator itr;
    while(!vertexQueue.empty())
    {
        int x = vertexQueue.front();
        vertexQueue.pop();

        if(isVisited[x] == true)
        {
            for(itr = adj[x].begin();itr!=adj[x].end();itr++)
            {
                if(*itr == d)
                {
                    return true;
                }
                if(isVisited[*itr] == false)
                {
                    isVisited[*itr] = true;
                    vertexQueue.push(*itr);
                }
            }
        }
    }
    return false;
}


int main()
{
    Graph g1(5);
    g1.addVertex(0,1);
    g1.addVertex(1,3);
    g1.addVertex(1,2);
    g1.addVertex(2,4);
    g1.addVertex(3,4);
    if(g1.isPathReachable(2,3) == true)
    {
        cout<<" Path is available between given Vertices \n";
    }
    else
    {
        cout<<" There is no Path between given Vertices \n";
    }
    
    return 0;
}