class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =  nums.size();
        int steps = k % n;
        vector<int> ksize;
        for(int i = n-steps;i<n;i++)
        {
            ksize.push_back(nums[i]);
        }
        for(int i = n-steps-1;i>=0;i--)
        {
            nums[i+steps]=nums[i];
        }
        for(int i = 0;i<steps;i++)
        {
            nums[i] = ksize[i];
        }    
        
    }
};