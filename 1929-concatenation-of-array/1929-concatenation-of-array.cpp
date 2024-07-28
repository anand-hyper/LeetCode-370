class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
     
     vector<int>answer;
     for(int i=0;i<nums.size();i++)
     {
            answer.emplace_back(nums[i]);
     }
      for(int i=0;i<nums.size();i++)
     {
         answer.emplace_back(nums[i]);
     }
     return answer;
    }
};