class Solution {
public:
    void dfs(int node,vector<bool>&vis,unordered_map<int,list<int>>&adj,stack<int>&s){
        vis[node]=1;
        for(auto neighbour: adj[node]){
            if(!vis[neighbour]){
                dfs(neighbour,vis,adj,s);
            }
        }
        s.push(node);
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,list<int>>adj;
        vector<bool>vis(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            adj[v].push_back(u);
        }
        queue<int>q;
        vector<int>indegree(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto j:adj[i]){
                indegree[j]++;
            }
        }
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0) q.push(i);
        }
        vector<int>ans;

        while(!q.empty()){
            int front=q.front();
            q.pop();
            ans.push_back(front);
            for(auto neighbour:adj[front]){
                indegree[neighbour]--;
                if(indegree[neighbour]==0) q.push(neighbour); 
            }
        }
        if(ans.size()==numCourses) return ans;
        else return {};
    }
};