#include <bits/stdc++.h>
using namespace std;
class Solution {
  private:
     bool dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &pathVis, vector<int> &track) {
        vis[node] = 1;
        pathVis[node] = 1;
        // Traversing for the adjacent nodes 
        for(auto item : adj[node]) {
            if(!vis[item]) {
                if(dfs(item, adj, vis, pathVis, track) == true)
                    return true;
            }
            else if(pathVis[item])
                return true;
        }
        track[node] = 1;
        pathVis[node] = 0;
        return false;
    }
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int>safeNodes;
        vector<int>vis(V, 0);
        vector<int>pathVis(V, -1);
        vector<int>track(V, 0);
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                dfs(i, adj, vis, pathVis, track);
            }
        }
        for(int i = 0; i < track.size(); i++) {
            if(track[i] == 1)
                safeNodes.push_back(i);
        }
        return safeNodes;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}
