#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution{
    public:
    vector<vector<int>>buildGraph(int V,vector<vector<int>>&edges){
        vector<vector<int>>adj(V);
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return adj;
    }
};
int main(){
    int V,E;

    cout<<"Enter the no. of vertices: ";
    cin>>V;

    cout<<"Enter the no. of edges: ";
    cin>>E;

    vector<vector<int>>edges(E,vector<int>(2));
    cout<<"\n Enter each edge as u v: \n";
    cout<<"Vertices should be numbered from 0 to"<<V-1<<":\n\n";

    for(int i=0;i<E;i++){
        cout<<"Edge "<<i+1<<": ";
        cin>>edges[i][0]>>edges[i][1];
    }

    Solution obj;
    vector<vector<int>>adj=obj.buildGraph(V,edges);

    cout<<"\n Adjacency List: \n";
    for(int i=0;i<V;i++){
        cout<< i <<"->";

        for(int node:adj[i]){
            cout<<node<<" ";
        }
        cout<<endl;
    }
    return 0;
}