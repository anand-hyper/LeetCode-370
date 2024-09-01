class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        multiset<int> ms;
        for(int i=0;i<nums.size();i++)
        {
            int sqr = nums[i]*nums[i];
            ms.insert(sqr);
            
        }
        vector<int>result(ms.begin(),ms.end());
        return result;
    }
};