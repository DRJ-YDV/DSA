class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        unordered_map<int,list<int>>adj;
        vector<int>outdegree(graph.size());
        for(int i=0;i<graph.size();i++){
            for(auto j:graph[i]){
                adj[j].push_back(i);
                outdegree[i]++;
            }
        }
        
        queue<int>q;
        for(int i=0;i<graph.size();i++){
            if(outdegree[i]==0) q.push(i);
        }

        vector<int>ans;
        while(!q.empty()){
            int front=q.front();
            q.pop();

            ans.push_back(front);
            for(auto neighbour : adj[front]){
                outdegree[neighbour]--;
                if(outdegree[neighbour]==0) q.push(neighbour);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};