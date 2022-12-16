#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int>inDeg(V, 0);
	    for(int u = 0; u < V; u++) {
	        for(auto v : adj[u]) 
	            inDeg[v] += 1;
	    }
	    
	    queue<int>zeroDegNodes;
	    for(int i = 0; i < V; i++) {
	        if(inDeg[i] == 0)
	            zeroDegNodes.push(i);
	    }
	    int count = 1;
	    while(!zeroDegNodes.empty()) {
	        auto vertex = zeroDegNodes.front();
	        zeroDegNodes.pop();
	        for(auto neigh : adj[vertex]) {
	            inDeg[neigh]--;
	            if(inDeg[neigh] == 0)  {
	                zeroDegNodes.push(neigh);
	                count++;
	           }
	        }
	    }
	    if(count != V) 
	        return true;
	    return false;
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
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

