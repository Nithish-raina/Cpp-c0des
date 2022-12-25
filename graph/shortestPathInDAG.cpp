#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void topoDFS(int node, vector<pair<int,int>>adj[], vector<int> &vis, stack<int> &st) {
        vis[node] = 1;
        for(auto neigh : adj[node]) {
            if(!vis[neigh.first]) {
                topoDFS(neigh.first, adj, vis, st);
            }
        }
        st.push(node);
    }
    
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        vector<pair<int,int>>adj[N];
        for(int i = 0; i < M; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int dist = edges[i][2];
            adj[u].push_back({v, dist});
        }
        stack<int>st;
        vector<int>vis(N, 0);
        for(int i = 0; i < N; i++) {
            if(!vis[i])
                topoDFS(i, adj, vis, st);
        }
        vector<int>dist(N, 1e9);
        dist[0] = 0;
        while(!st.empty()) {
            int node = st.top();
            st.pop();
            for(auto neigh : adj[node]) {
                int rNeigh = neigh.first;
                int wt = neigh.second;
                if(dist[node] + wt < dist[rNeigh]) {
                    dist[rNeigh] = dist[node] + wt;
                }
            }
        }
        for(int i = 0; i < N; i++) {
            if(dist[i] == 1e9) 
                dist[i] = -1;
        }
        return dist;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

