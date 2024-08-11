class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int n = nums.size();
      vector<int>ans;
      int start=-1,end=-1;
     
      if(n>=1){
      auto lower = lower_bound(nums.begin(),nums.end(),target);
      auto upper = upper_bound(nums.begin(),nums.end(),target);
      int lb = lower - nums.begin();
      int up = upper - nums.begin();
      
      if(lb == n || nums[lb] != target)
      {
          start = -1,end=-1;
      }
      else{
      start = lb;
      end = up-1;
      }
      }
      ans.push_back(start);
      ans.push_back(end);
      return ans;
      
    }
};