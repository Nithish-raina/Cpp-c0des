#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        unordered_set<string>seen(wordList.begin(), wordList.end());
        queue<pair<string,int>>q;
        q.push({startWord, 1});
        seen.erase(startWord);
        
        while(!q.empty()) {
            string word = q.front().first;
            int len = q.front().second;
            q.pop();
            
            if(word == targetWord) return len;
            
            for(int i = 0; i < word.size(); i++) {
                char temp = word[i];
                for(char c = 'a'; c <= 'z'; c++) {
                    word[i] = c;
                    if(seen.find(word) != seen.end()) {
                        seen.erase(word);
                        q.push({word, len + 1});
                    }
                }
                word[i] = temp;
            }
        }
        return 0;
    }
};

int main() {
	int tc;
	cin >> tc;
	
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		
		for(int i = 0; i < n; i++) cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
