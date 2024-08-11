class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1,end = -1;
        int n= nums.size();
        int low=0,high=n-1,mid=0;
        vector<int> ans;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(nums[mid] == target)
            {
                start = mid;
                high = mid-1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else high = mid-1;
        }
        low=0,high=n-1,mid=0;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(nums[mid] == target)
            {
                end = mid;
                low = mid+1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else high=mid-1;
        }
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};