class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int len = nums.size();
        int ans =0;
        
        for(int i=0;i<len;i++)
        {
            int num = nums[i];
            int count = 0;
            while(num>0)
            {
                num = num/10;
                count++;
            }
            if(count%2==0) ans+=1;
            
        }
        return ans;
    }
};