#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   vector<int>candies(n);
   for(int i = 0; i < n; i++) cin >> candies[i];
   int k;
   cin >> k;
   int maxx = *max_element(candies.begin(),candies.end());
   vector<bool>res;
   bool ans = false;
   for(int i = 0; i < n; i++)
   { 
     res.push_back((candies[i]+k)>=maxx);
   }
   for(int i = 0; i < res.size(); i++) cout << res[i] <<" ";



}