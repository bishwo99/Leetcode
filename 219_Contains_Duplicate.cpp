//This code use O(N^2) and got TLE on Leetcode
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    int k; 
    cin >> k;
    bool ans = false;
    
    for(int i = 0; i < n; i++)
    {
        for( int j = i+1; j < n; j++ )
        {
            if( nums[i] == nums[j]){
                if(abs(j - i) <= k){
                      ans = true;
                };
            }
        }
    }

    if(ans) cout <<"True";
    else 
    cout <<"False";
}



