class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;
        bool flag1 = 0, flag2 = 0;
        
        while(l < r){
            if(s[l] != s[r])
                break;
            else
                l++, r--;
        }
        
        int ln = l+1, rn = r;
        while(ln < rn){
            if(s[ln] != s[rn]){
                flag1 = 1;
                break;
            }
            else
                ln++, rn--;
        }
        if(!flag1)
            return true;
        ln = l, rn = r-1;
        while(ln < rn){
            if(s[ln] != s[rn]){
                flag2 = 1;
                break;
            }
            else
                ln++, rn--;
        }
    
        if(!flag2)
            return true;
        return false;
        
    }
};
