class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int tmp  = 0;
        int d = x;
        while( x > 0 )
        {
            tmp = x%10;
            sum+=tmp;
            x/=10;
        }
        if( d%sum != 0 ) 
        return -1;
        else 
        return sum;
    }
};
