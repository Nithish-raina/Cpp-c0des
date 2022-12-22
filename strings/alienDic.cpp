class Solution {
public:
    bool isSorted(unordered_map<char, int> &alienDicMap, string &s1, string &s2) {
        int fLen = s1.size();
        int sLen = s2.size();    
            
        for (int ptr = 0; ptr < fLen; ++ptr) {                
            if ( ptr >= sLen || alienDicMap[s1[ptr]] > alienDicMap[s2[ptr]])    
                return false;
            else if (alienDicMap[s1[ptr]] < alienDicMap[s2[ptr]])    
                break;
        }
        return true;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        int len = words.size();
        
        if (len <= 1)
            return true;
        unordered_map<char, int> alienDicMap;
        
        for (int i = 0; i < order.size(); ++i) {
            alienDicMap[order[i]] = i;
        }
        
        for (int i = 1; i < len; ++i) {
            string first = words[i-1];
            string second = words[i];            
            if(isSorted(alienDicMap, first, second) == false)
                return false;
        }            
        return true;
    }
};
