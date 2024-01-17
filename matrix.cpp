#include<iostream>

using namespace std;

int main() {
    int n,m;
    cout<<"Enter number of nodes\n";
    cin>>n;
    cout<<"Enter number of edges\n";
    cin>>m;
    int **arr = new int*[n+1];

    for(int i=1;i<=n;i++) {
        arr[i] = new int[n+1];
    }

    for(int i=1;i<=m;i++) {
        int u,v;
        cout<<"Enter Path in pairs\n";
        cin>>u;
        cin>>v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }


    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}