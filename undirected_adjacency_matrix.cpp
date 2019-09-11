#include<iostream>
using namespace std;
class Graph{
  public:
  int V;
  int E;
  int **adj;
};

Graph *createGraph(){
Graph *g=new Graph();
cout<<"Enter Vertices and edges in your graph";
cin>>g->V>>g->E;
g->adj=new int*[g->V];
for(int i=0;i<g->V;i++)
{
  g->adj[i]=new int[g->V];
  for(int j=0;j<g->V;j++)
  {
    g->adj[i][j]=0;
  }
}
int u,v;
cout<<"Enter node numbers in pair that connected an edge";
for(int i=0;i<g->E;i++)
{
      cin>>u>>v;
      g->adj[u][v]=1;
      g->adj[v][u]=1;
}
return g;
}
int main(){
  Graph *g=createGraph();
  for(int i=0;i<g->V;i++)
  {
    for(int j=0;j<g->V;j++)
    {
      cout<<g->adj[i][j]<<" ";
    }
    cout<<"\n";
  }
}
