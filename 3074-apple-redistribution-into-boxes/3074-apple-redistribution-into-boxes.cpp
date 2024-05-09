class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
        int sum=0,cnt=0;
        int n=apple.size();
        int m=capacity.size();
        for(int i=0;i<n;i++)
        {
            sum=sum+apple[i];
        }
        
        sort(capacity.begin(),capacity.end());
        for(int i=m-1;i>=0;i--)
        {
            sum=sum-capacity[i];
            cnt++;
            if(sum<=0)
                break;
            
        }
        return cnt;
    }
};