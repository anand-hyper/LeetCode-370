class Solution {
public:
    bool isPalindrome(int x) {
        
          int num =x,reversenum=0,rem=0;
          if(num<0)
          {
              return false;
              
          }
          
          while(num!=0)
          {
              rem=num%10;
              if(reversenum>INT_MAX/10 || reversenum==INT_MAX/10 && rem>7)
              {
                  return false;
              }
              reversenum=reversenum*10+rem;
              num=num/10;
          }
          if(reversenum==x)
          {
              return true;
              
          }
          else 
          {
              return false;
          }
    }
};