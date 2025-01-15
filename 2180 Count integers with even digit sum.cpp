class Solution {
public:
    int digSum(int a)
    {
        int ans = 0;
        while(a)
        {
            ans = ans + a % 10;
            a = a / 10;
        }
       return ans;
    }
    int countEven(int num) {
        int cnt = 0;
        for(int i = 1; i <= num; i++)
        {
            if(digSum(i) % 2 == 0) cnt++;
        }
        return cnt;
      
    }
};
