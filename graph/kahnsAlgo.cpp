#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) {
	    // Kahn's algorithm 
	    vector<int>inDeg(V, 0);
	    for(int i = 0; i < V; i++) {
	        for(auto node : adj[i]) 
	            inDeg[node] += 1;
	    }
	    
	    queue<int>zeroDegNodes;
	    for(int i = 0; i < V; i++) {
	        if(inDeg[i] == 0)
	            zeroDegNodes.push(i);
	    }
	    
	    vector<int>topoList;
	    while(!zeroDegNodes.empty()) {
	        auto vertex = zeroDegNodes.front();
	        zeroDegNodes.pop();
	        topoList.push_back(vertex);
	        for(auto neigh : adj[vertex]) {
	            inDeg[neigh]--;
	            if(inDeg[neigh] == 0) 
	                zeroDegNodes.push(neigh);
	        }
	    }
	    return topoList;
	}
};

int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
        return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
