class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left =0,right = n-1;
        int ans =0;
        bool istrue = is_sorted(nums.begin(),nums.end()); 
        if(istrue == true)
        {
            ans = nums[0];
            
        }
        else
        {
        while(left<right)
        {
            int mid = (left+right)/2;
            
               
            
            if(nums[mid]<nums[right])
            {
                right = mid;
            }
            else if(left==mid)
            {  
                ans= nums[right];
                break;
            }
            else  left = mid;
            
            
        }
        }
        return ans;
    }
};