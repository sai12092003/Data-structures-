class Solution {
public:
    int reverse(int x) 
{
    long k = x;
    long result=0;
    int negative=0;


    if (k < 0)
    {
        negative = 1;
        k = 0 - k;
    }
    
    while (k != 0)
    {
      result = (result * 10) +( k % 10);
        k /= 10;

    }
    if (result >INT_MAX)
      return 0;
    else
    {
      if (negative == 1)
            return (0-(int)result);
      else
            return (int)result;
    }
}
      
    
};
