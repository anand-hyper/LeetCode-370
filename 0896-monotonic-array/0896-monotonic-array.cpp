class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=0;
        int n = nums.size();
        bool ansone = is_sorted(nums.begin(),nums.end());
        bool anstwo = is_sorted(nums.begin(),nums.end(),greater<int>());
        if(ansone || anstwo)
        {
            return true;
        }
        else return false;
    }
};