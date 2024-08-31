class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left =0,right = n-1;
        int ans =0;
        bool istrue = is_sorted(nums.begin(),nums.end()); 
        if(istrue == true)
        {
            return nums[0];
            
        }
        
        while(left<right)
        {
            int mid = (left+right)/2;
            
               
            
            if(nums[mid]<nums[right])
            {
                right = mid;
            }
            else 
            {  
                left = mid+1;
            }
            
            
            
        
             
        }
        return nums[left];
        
    }
};