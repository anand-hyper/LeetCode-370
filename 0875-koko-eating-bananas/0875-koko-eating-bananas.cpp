class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //imaginary array [1,2,3,4,5,6,7,8,9,10,11]
        
        int n = piles.size();
        int maxi = *(max_element(piles.begin(),piles.end()));
        int low=1, high= maxi;
        int ans=0;
        while(low<=high)
        {
            long long hoursneeded = 0;
            
            
            int mid=(low+high)/2;
            
            for(int i=0;i<n;i++)
            {
               hoursneeded += (piles[i] + mid-1LL) / mid;
            }
            if(hoursneeded <= h)
            {
                ans = mid;
                high=mid-1;
            }
            else 
                low=mid+1;
        }
        return ans;
    }
};