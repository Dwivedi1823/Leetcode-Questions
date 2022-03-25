class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        vector<int> cnt(26);
        for(char c : s)
            cnt[c - 'a'] += 1;
        
        for(char c : t){
            cnt[c - 'a'] -= 1;
            if(cnt[c - 'a'] < 0)
                return false;
        }
        return true;
    }
};
