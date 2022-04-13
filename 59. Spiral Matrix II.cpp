class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
            int top = 0, btm = n - 1, right = n - 1, left = 0;
            int val = 1;
            while(val <= n*n){
                for(int i = left; i <= right; ++i)
                    matrix[top][i] = val++;
                top++;
                for(int i = top; i <= btm; ++i)
                    matrix[i][right] = val++;
                right--;
                for(int i = right; i >= left; --i)
                    matrix[btm][i] = val++;
                btm--;
                for(int i = btm; i >= top; i--)
                    matrix[i][left] = val++;
                left++;
            }
        return matrix;  
    }
};
