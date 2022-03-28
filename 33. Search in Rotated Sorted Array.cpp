class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while(left <= right){
            int mid = (left + right)/2;
            
            if(nums[mid] == target) return mid;
            
            else if(nums[left] <= nums[mid]){
                if(nums[left] <= target and nums[mid] > target)
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            else{
                if(nums[mid] < target and nums[right] >= target)
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return -1;
    }
};

/*
Time Complexity : O(logN)
Space Complexity : O(1)
*/
