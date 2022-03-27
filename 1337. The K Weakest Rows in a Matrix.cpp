class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> v;
        vector<pair<int, int>> vp;
        map<int, int> mp;
        
        for(int i = 0; i < mat.size(); ++i){
            int cnt = 0;
            for(int j = 0; j < mat[0].size(); ++j){
                if(mat[i][j] == 1)
                    cnt++;
            }
            vp.push_back({cnt, i});
        }
        sort(vp.begin(), vp.end());
        int m = 0;
        for(auto x : vp){
            v.push_back(x.second);
                m++;
                if(m >= k)
                    break;
        }
        
        return v;
    }
};
