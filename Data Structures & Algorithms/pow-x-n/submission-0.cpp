class Solution {
public:
    double myPow(double x, int n) {
      bool isLessThanZero = (n<0);
      bool mulByNeg=(x<0)&&(n&1);
      n=abs(n);
      double mul=abs(x), ans=1.0;
      while(n)
      {
        if(n&1)
        {
            ans*=mul;
        }
        n>>=1;
        mul=(mul*mul);
      }  

        if(isLessThanZero)
            ans= 1.0/ans;
        if(mulByNeg)
            ans=-1.0*ans;
        return ans;
    }
};
