class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while(left <= right){
            int mid = (left + right)/2;
            if(nums[mid] == target) return true;
            
            //Checking for Duplicates on both sides
            if(nums[left] == nums[mid] and nums[mid] == nums[right]){
                left++;
                right--;
            }
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
        return false;
    }
};

//This is also a solution but must be avoided!..Reason is too much comparison ie Time Complexiy is 0(N)
/*
for(auto x  : nums){
            if(x == target)
                return true;
        }
        return false;
*/

