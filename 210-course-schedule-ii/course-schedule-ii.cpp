class Solution {
public:
    bool dfs(int node,vector<int>&vis,unordered_map<int,list<int>>&adj,stack<int>&s){
        vis[node]=1;
        for(auto neighbour: adj[node]){
            if(vis[neighbour]==1){
                return false;
            }
            if(vis[neighbour]==0){
                if(!dfs(neighbour,vis,adj,s)) return false;
            }
        }
        vis[node]=2;
        s.push(node);

        return true;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,list<int>>adj;
        vector<int>vis(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            adj[v].push_back(u);
        }
        // queue<int>q;
        // vector<int>indegree(numCourses,0);
        // for(int i=0;i<numCourses;i++){
        //     for(auto j:adj[i]){
        //         indegree[j]++;
        //     }
        // }
        // for(int i=0;i<numCourses;i++){
        //     if(indegree[i]==0) q.push(i);
        // }
        // vector<int>ans;

        // while(!q.empty()){
        //     int front=q.front();
        //     q.pop();
        //     ans.push_back(front);
        //     for(auto neighbour:adj[front]){
        //         indegree[neighbour]--;
        //         if(indegree[neighbour]==0) q.push(neighbour); 
        //     }
        // }
        // if(ans.size()==numCourses) return ans;
        // else return {};

        vector<int>ans;
        stack<int>s;
        for(int i=0;i<numCourses;i++){
            if(vis[i]==0){
                if(!dfs(i,vis,adj,s)) return {};
            }
        }
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};