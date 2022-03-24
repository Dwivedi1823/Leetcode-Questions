class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        if(m < 1 or n < 1)
            return false;
        
        int row = 0;
        int col = n - 1;
        
        while(row < m and col >= 0){
            int key = matrix[row][col];
            if(key < target)
                row++;
            else if(key > target)
                col--;
            else
                return true;
        }
        
        return false;
    }
};
