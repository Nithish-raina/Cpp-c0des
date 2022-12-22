#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
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
	
    string findOrder(string dict[], int N, int K) {
        // Business logic here
        vector<int>adj[K];
        for(int i = 0; i < N - 1; i++) {
            string s1 = dict[i];
            string s2 = dict[i + 1];
            int minLen = min(s1.size(), s2.size());
            for(int ptr = 0; ptr < minLen; ptr++) {
                if(s1[ptr] != s2[ptr]) {
                    adj[s1[ptr] - 'a'].push_back(s2[ptr] - 'a');
                    break;
                }
            }
        }
        vector<int>res = topoSort(K, adj);
        string ans = "";
        for(auto i : res) {
            ans += char(i + 'a');
        }
        return ans;
    }
};

string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}
