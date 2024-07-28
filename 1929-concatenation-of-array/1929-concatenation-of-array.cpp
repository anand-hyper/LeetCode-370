class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
     
     vector<int>answer;
     int len = nums.size();
     for(int i=0;i<len*2;i++)
     {
            answer.emplace_back(nums[i%len]);
     }
   
     return answer;
    }
};