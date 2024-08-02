class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inc = true,dec = true;
        int n = nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(!(nums[i] <= nums[i+1]))
            {
                inc = false;
            }
            else if(!(nums[i] >= nums[i+1]))
            {
                dec = false;
            }
        }
        return inc || dec;
    }
};