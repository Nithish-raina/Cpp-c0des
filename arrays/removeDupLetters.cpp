class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> lastIndices(26, 0);
        for (int i = 0; i < s.size(); i++){
            lastIndices[s[i] - 'a'] = i;
        }
        
        vector<bool> seen(26, false);
        stack<char> st;
        
        for (int i = 0; i < s.size(); i++) {
            int currCharInd = s[i] - 'a';
            if (seen[currCharInd]) continue;
            while(st.size() > 0 && st.top() >= s[i] && i <= lastIndices[st.top() - 'a']){
                seen[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(s[i]);             
            seen[currCharInd] = true;
        }
        
        string ans = "";
        while (!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
