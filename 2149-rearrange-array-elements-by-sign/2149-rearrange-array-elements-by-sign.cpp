class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(auto num : nums)
        {
            if(num > 0)
            {
                pos.push_back(num);
            }
            else 
            {
                neg.push_back(num);
            }
        }
        for(int i=0;i<nums.size()/2;i++)
        {
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];
        }
       return nums;
    }
};