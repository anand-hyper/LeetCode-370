class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int maxi = *(max_element(arr.begin(),arr.end()));
        int n = maxi+k;
  
        for(int i = 1;i<=n;i++)
        {
            
            if(find(arr.begin(),arr.end(),i) == arr.end())
            {
                k=k-1;
            }
            if(k==0)
            {
                return i;
            }
        }
         
        return -1;
        
        
    }
};