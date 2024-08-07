class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n = nums.size();
       int m = n/2;
       int ans = 0;
        int count = 0; 
        
        for(int i=0;i<n;i++)
        {
            count =0;
            for(int j=0;j<n;j++)
            {
                if(nums[i] == nums[j])
                {
                   count ++;
                }
            }
           if(count > m )
           {
               ans = nums[i];
               break;
           }
        }
        return ans;
    
    }
};