class Solution {
public:
    int findMin(vector<int>& nums) {

        int mini = INT_MAX;
        int mid =0;
        int left =0, right = nums.size()-1;
        while(left<=right)
        {
            mid = (left+right)/2;
            
            if(nums[left]<=nums[mid])
            {
                mini = min(mini,nums[left]);
                left = mid + 1;
                
            }
            else 
            {
                mini = min(mini,nums[mid]);
                right = mid-1;
            }
            
            
        }
        return mini;
        
    }
};