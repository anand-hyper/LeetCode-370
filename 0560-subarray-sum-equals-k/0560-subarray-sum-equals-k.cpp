class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0,count =0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            sum = 0;
            for(int j=i;j<n;j++)
            {
                sum = sum + nums[j];
                if(sum == k)
                {
                    count = count +1;
                    
                }
            }
        }
        return count;
    }
};