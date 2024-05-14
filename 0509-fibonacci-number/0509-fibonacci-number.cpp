class Solution {
public:
    int fib(int n) {
        int a=0,b=1,nextterm=0;
        if(n<=1)
            return n;
        else 
        {
             for(int i=2;i<=n;i++)
             {
                  nextterm = a+b;
                  a=b;
                  b=nextterm;
                  
             }
             return nextterm;
        }
        
    }
};