class Solution {
public:
    int nofdays(vector<int>&weight , int capacity)
    {
       int day=1,load =0;
       int n = weight.size(); 
       for(int i=0;i<n;i++)
       {
           if(load+weight[i] > capacity)
           {
               day = day+1;
               load = weight[i];
           }
           else load += weight[i];
       }
       return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        //search space is sum of weights / days to a twice of this 

        int n = weights.size();
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += weights[i];
        }
        int low = *(max_element(weights.begin(),weights.end()));
        int high = sum;
        int ans=0;
        while(low<=high)
        {
            int mid = (low+high)/2;
            int nod = nofdays(weights,mid);
            if(nod<=days)
            {
                ans = mid;
                high = mid-1;
            }
            else 
            {
               
                low = mid+1;
            }
            
        }
        return ans;
    }
};