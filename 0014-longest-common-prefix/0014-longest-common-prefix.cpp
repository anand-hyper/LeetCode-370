class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        string ans = "";
        if(n==1) return strs[0];
        for(int i=0;i<n-1;i++)
        {
            string temp = "";
            string s1 = strs[i];
            string s2 = strs[i+1];
            int n1 = s1.length();
            int n2 = s2.length();
            int left = 0, right = 0;
            while(left<n1 && right < n2)
            {
                if(s1[left]==s2[right])
                {
                    temp += s1[left];
                    left++;
                    right++;
                }
                else
                {
                    break;
                }
            }
            if(i==0)
            {
                ans = temp;
            }
            else if(temp.length() < ans.length())
            {
                ans = temp;
            }
        }
        return ans;
    }
};