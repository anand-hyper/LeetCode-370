class Solution {
public:
    bool search(vector<int>& nums, int target) {
         set <int> s(nums.begin(),nums.end());
         vector<int> vnums(s.begin(),s.end());
         int n = vnums.size();
         int low =0,high=n-1,mid=0;
         bool ans = false;
         while(low<=high)
         {
             mid = (low+high)/2;
             if(vnums[mid]==target)
             {
                 ans = true;
                 break;
             }
             if(vnums[low]<=vnums[mid])
             {
                 if(vnums[low]<=target && target<=vnums[mid])
                 {
                     high = mid-1;
                 }
                 else low = mid+1;
             }
             else
             {
                 if(vnums[mid]<=target && target<=vnums[high])
                 {
                     low=mid+1;
                 }
                 else high=mid-1;
             }
         }
         return ans;
            
    }
};