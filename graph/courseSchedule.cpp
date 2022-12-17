#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) {
        vector<int>adj[n];
        
        for(auto i: prerequisites) {
            adj[i[1]].push_back(i[0]);
        }
        vector<int>inDeg(n, 0);
	    for(int i = 0; i < n; i++) {
	        for(auto node : adj[i]) 
	            inDeg[node] += 1;
	    }
	    
	    queue<int>zeroDegNodes;
	    for(int i = 0; i < n; i++) {
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
	    
        if(topoList.size() == n)
            return topoList;
        return {};
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}
