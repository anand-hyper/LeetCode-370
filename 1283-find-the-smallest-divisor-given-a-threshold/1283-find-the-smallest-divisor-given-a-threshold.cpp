class Solution {
public:
    bool ispossible(vector<int>& num,int t,int val)
    {
        
        int sum = 0;
        int n = num.size();
        for(int i=0;i<n;i++)
        {
            sum += (num[i]+val-1)/val;
        }
        if(sum<=t) return true;
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
         int mini = *(min_element(nums.begin(),nums.end()));
         int maxi = *(max_element(nums.begin(),nums.end()));
         int low = 1 , high = maxi;
         int ans = 0;
         while(low<=high)
         {
             int mid = (low+high)/2;
             
             if(ispossible(nums,threshold,mid))
             {
                 ans = mid;
                 high = mid-1;
             }
             else 
                low = mid+1;
         }
         return ans;
    }
};