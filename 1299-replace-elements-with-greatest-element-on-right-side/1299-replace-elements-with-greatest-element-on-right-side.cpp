class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxv=-1,temp=0;
        for(int i=n-1;i>=0;i--)
        {
            temp=arr[i];
            arr[i]=maxv; 
            
            maxv=max(maxv,temp);
        }
        return arr;
    }
};