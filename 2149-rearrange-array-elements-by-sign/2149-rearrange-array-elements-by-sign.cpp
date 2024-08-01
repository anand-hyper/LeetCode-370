class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>ans;
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
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
       return ans;
    }
};