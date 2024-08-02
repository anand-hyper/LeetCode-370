class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inc = true,dec = true;
        int n = nums.size();
        if((nums[n-1] - nums[0]) < 0)
        {
            reverse(nums.begin(),nums.end());
        }
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                return false;
            }
        }
        return true;
    }
};