class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
      
      int n = arr.size();
      int maxsofar = arr[n-1];
      int temp =0;
      arr[n-1] = -1;
      for(int i = n-2;i>=0;i--)
      {
           temp = maxsofar;
           if(maxsofar<arr[i]) maxsofar = arr[i];
           arr[i]= temp;
      }
      return arr;
    };
};