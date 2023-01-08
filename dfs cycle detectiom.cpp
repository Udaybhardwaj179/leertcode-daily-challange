#include<unordered_map>
#include<queue>
#include<list>
bool bfs(int node,unordered_map<int,list<int>> &adjl,unordered_map<int,bool> &vis ){
    unordered_map<int,int> parent;
    parent[node]=-1;
    vis[node]=1;
    queue<int>q;
    q.push(node);
    while(!q.empty()){
        
        int front=q.front();
        q.pop();
        for (auto i: adjl[front]){
            if (vis[i] && parent[front]!=i){
                return true;
            }
            else if (!vis[i]){
                q.push(i);
                vis[i]=1;
                parent[i]=front;
            }
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int,list<int>> adjl;
    unordered_map<int,bool> vis;
    
   for (int i=0;i<edges.size();i++){
       int a=edges[i][0];
       int b=edges[i][1];       
       adjl[a].push_back(b);
       adjl[b].push_back(a);
   }
    for (int i=1;i<n;i++){
        if (!vis[i]){
            bool s=bfs(i,adjl,vis);
            if (s){
                return "Yes";
            }
        }
    }
    return "No";
}
// cycle detection using bfs
