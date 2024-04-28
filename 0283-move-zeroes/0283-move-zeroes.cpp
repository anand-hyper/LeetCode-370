class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        
    vector<int> arr1;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
      if (nums[i] != 0) {
        arr1.push_back(nums[i]);
      }
    }
    int k=arr1.size();
    for(int i=0;i<k;i++)
    {
        nums[i]=arr1[i];

    }
    for(int j=k;j<n;j++)
    {
        nums[j]=0;
    }
     
        
        
    }
};