class Solution {
public:
    bool possible(vector<int>& arr,int day , int m , int k)
    {
        int n = arr.size();
        int cnt = 0;
        int nfbou = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=day)
            {
                cnt++;
            }
            else
            {
                nfbou = nfbou + cnt/k;
                cnt = 0;
            }
        }
        nfbou += cnt/k;
        if(nfbou >= m) return true ;
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = m *1LL * k * 1LL ;
        if(val > n) return -1;
        
        int mini = *(min_element(bloomDay.begin(),bloomDay.end()));
        int maxi =  *(max_element(bloomDay.begin(),bloomDay.end()));
      
        int low = mini, high = maxi,mid = 0;
       
        
        while(low<=high)
        {
            mid = (low+high)/2;
            
         
            
            if(possible(bloomDay,mid,m,k))
            {
               
                high = mid-1;
                
            }
            else{
                low = mid+1;
             }


        }
        return low;
        
        
        
    }
};