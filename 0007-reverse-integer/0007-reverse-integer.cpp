class Solution {
public:
    int reverse(int x) {
        int num=x;
        int reversenum=0;
        while(x!=0)
        {
            int lastdigit = x%10;
            if (reversenum > (INT_MAX / 10) || (reversenum == INT_MAX / 10 && lastdigit >7))             {
                return 0; // Overflow for positive numbers
            }
            if (reversenum < (INT_MIN / 10) || (reversenum == INT_MIN / 10 && lastdigit<-8))             {
                return 0; // Overflow for negative numbers
            }
            
            
            reversenum = (reversenum*10)+lastdigit;
            
            
            x=x/10;
        }   
       
        
        return reversenum;
        
        
    }
};