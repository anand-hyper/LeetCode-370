class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int len = nums.size();
        int ans =0;
        
        for(int i=0;i<len;i++)
        {
            string s = to_string(nums[i]);
            int l = s.length();
            if(l%2 == 0)
            {
                ans+=1;
            }
        }
        return ans;
    }
};