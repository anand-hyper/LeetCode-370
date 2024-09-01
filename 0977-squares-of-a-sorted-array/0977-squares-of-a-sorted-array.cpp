class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int left =0,right = nums.size()-1;
        int index = nums.size()-1;
        int leftsquare = 1;
        int rightsquare = 1;
        vector<int>ans(nums.size());
        while(left<=right)
        {
            leftsquare = nums[left]*nums[left];
            rightsquare = nums[right]*nums[right];
            if(leftsquare>rightsquare)
            {
                ans[index] = leftsquare;
                left++;     
            }
            else 
            {
                ans[index] = rightsquare;
                right--;
            }
            index--;
        }
        return ans;
        
    }
};