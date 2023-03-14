class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> anand;
        
        for(int i=0;i<nums.size();i++)
        {
            if(anand.find(nums[i])!=anand.end())
                return true;
            anand.insert(nums[i]);
        }
        return false;
        
    }
};