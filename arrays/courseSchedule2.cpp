class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        
        for(auto i: prerequisites) {
            adj[i[1]].push_back(i[0]);
        }
        vector<int>inDeg(numCourses, 0);
	    for(int i = 0; i < numCourses; i++) {
	        for(auto node : adj[i]) 
	            inDeg[node] += 1;
	    }
	    
	    queue<int>zeroDegNodes;
	    for(int i = 0; i < numCourses; i++) {
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
        if(topoList.size() != numCourses) {
            return {};
        }
        return topoList;
    }
};
