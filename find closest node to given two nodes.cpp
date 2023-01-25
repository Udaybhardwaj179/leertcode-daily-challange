class Solution {
public:
void storePath(int i,int dis, vector<int> &edges,vector<int> &path){
    if (i!=-1 && path[i]==-1){
        path[i]=dis;
        storePath(edges[i],dis+1,edges,path);
    }
}
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int ans=-1;
        int minDis =INT_MAX;
        int n=edges.size();
        vector<int> v1(n,-1),v2(n,-1);
        storePath (node1,0,edges,v1);
        storePath(node2,0,edges,v2);
        for (int i=0;i<n;i++){
            if (min(v1[i],v2[i])>=0 && max(v1[i],v2[i])<minDis){
                minDis=max(v1[i],v2[i]);
                ans=i;
            }
        }
        return ans;

    }
};
