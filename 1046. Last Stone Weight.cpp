class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        vector<int> :: iterator it;
        it = stones.begin();
        
        sort(stones.begin(), stones.end());
        
        int i = stones.size() - 1;
        if(stones.size() >= 2){
            if(stones[i] == stones[i-1]){
                stones.erase(it + i);
                stones.erase(it + i -1);
            }
            else{
                stones[i] = stones[i] - stones[i-1];
                stones.erase(it + i - 1);
            }
            lastStoneWeight(stones);
        }

        if(stones.size() != 0)
            return stones[0];
        return 0;
    }
};
