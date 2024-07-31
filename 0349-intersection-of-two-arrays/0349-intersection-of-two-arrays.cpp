class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans;
        set<int>numz1(nums1.begin(),nums1.end());
      
        
        for(int num : nums2)
        {
            if(numz1.count(num))
            {
                    ans.push_back(num);
                    numz1.erase(num);
             }
            
        }
        return ans;
    }
};