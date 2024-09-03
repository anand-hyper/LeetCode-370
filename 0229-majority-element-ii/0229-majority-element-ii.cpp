class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n = nums.size();
       unordered_map<int,int>mpp;
       for(int i=0;i<n;i++)
       {
           mpp[nums[i]]++;
       }
       int val = n/3;
       vector<int> ans;
       for(auto each : mpp)
       {
           if(each.second>val)
             ans.push_back(each.first);
       }
       return ans;
       
    
    }
};