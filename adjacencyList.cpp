#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n,m;

    cout<<"Enter number of nodes\n";
    cin>>n;
    cout<<"Enter number of edges\n";
    cin>>m;

    vector<int> adj[n+1];

    for(int i=1;i<=m;i++) {
        int u,v;
        cout<<"Enter Path in pairs\n";
        cin>>u;
        cin>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1;i<=n;i++) {
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++) {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

}