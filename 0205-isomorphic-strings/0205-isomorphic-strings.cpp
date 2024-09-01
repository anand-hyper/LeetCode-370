class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,vector<int>> map1;
       unordered_map<char,vector<int>> map2;
       for(int i=0;i<s.size();i++)
       {
           map1[s[i]].push_back(i);
           map2[t[i]].push_back(i);
           
           if(map1[s[i]] != map2[t[i]])
           {
               return false;
           }
       }
        return true;
    }
};