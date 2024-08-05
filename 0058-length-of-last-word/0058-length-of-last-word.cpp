class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size();
        int flag = 0;
        for(int i = n-1;i>=0;i--)
        {
             if(!isalnum(s[i]) )
             {
                if(flag ==1)
                {
                    break;
                }
             }
             else {
                count+=1;
                flag = 1;
             }
        }
        return count;
    }
};