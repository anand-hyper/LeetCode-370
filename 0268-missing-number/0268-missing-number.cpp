class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int N = nums.size(),value;
        int sum1 = (N*(N+1))/2, sum2=0;
        
        for(int i=0;i<N;i++)
        {
             sum2=sum2+nums[i];
        }
        return (sum1-sum2);
    }
};