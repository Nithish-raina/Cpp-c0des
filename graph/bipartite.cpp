#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isBipartite(int start, vector<int> adj[], vector<int> &color) {
        queue<int>q;
        q.push(start);
        color[start] = 0;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            for(auto neigh : adj[node]) {
                if(color[neigh] == -1) {
                    color[neigh] = !color[node];
                    q.push(neigh);
                }
                else if(color[neigh] == color[node]) 
                    return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	   //int n = graph.size();
       vector<int>color(V, -1);
       for(int i = 0; i < V; i++) {
           if(color[i] == -1) {
               if(isBipartite(i, adj, color) == false) {
                   return false;
               } 
           }
       }
       return true; 
	}

}
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
