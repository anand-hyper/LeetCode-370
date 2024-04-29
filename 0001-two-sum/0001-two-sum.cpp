class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            int i,j;
            vector<int> index;
            for(i=0;i<nums.size();i++)
            {
               for(j=i+1;j< nums.size();j++)
               {
                     if(nums[i]+nums[j]==target)
                     {
                         index.push_back(i);
                         index.push_back(j);
                         return index;
                         
                     }
                   
               }


            }
            
            return index;
        
            
        
    }
};