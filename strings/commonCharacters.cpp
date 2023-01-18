#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>h1(26, 0);
        vector<int>h2(26, 0);
        for(auto &ch : words[0])
            h1[ch - 'a']++;
        for(int i = 1; i < words.size(); i++) {
            for(auto &c : words[i]) {
                h2[c - 'a']++;
            }
            for(int i = 0; i < 26; i++) {
                h1[i] = min(h1[i], h2[i]);
                h2[i] = 0; 
            }
        }
        vector<string>res;
        for(int i = 0; i < 26; i++) {
            if(h1[i] > 0) {
                int count = h1[i];
                while(count--) {
                    char c = i + 'a';
                    string s = "";
                    s += c;
                    res.push_back(s);
                }
            }
        }
        return res;
    }
};
