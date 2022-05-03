class Solution {
public:
    int titleToNumber(string s) {
        int n = s.size();
        long int ans = 0;
        long int base = 1;
        for(int i = n-1; i >= 0; --i){
            ans += (s[i] -'A' + 1)*base;
            base *= 26;
        }
        return ans;
    }
};
