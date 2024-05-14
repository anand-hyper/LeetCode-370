class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> news;
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
                news.push_back(tolower(s[i]));
        }
        int l=0,r=news.size()-1;
        while(l<r)
        {
            if(news[l]!=news[r])
            {
                return false;
            }
            else 
                l++;
                r--;
        }
        
        return true;
        
    }
};