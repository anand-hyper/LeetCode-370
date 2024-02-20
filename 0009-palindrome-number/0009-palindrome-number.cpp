class Solution {
public:
    bool isPalindrome(int x) {
        
        long oldnum =x,rnum;
        long lastdigit=0;
        while(x>0)
        {
              lastdigit=x%10;
              rnum=(rnum*10)+lastdigit;
              x=x/10;
        
        
        }
        
        return(oldnum==rnum);
        
    }
};