#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n;
  cin >> n;
  vector<int>nums(n);
  for(int i = 0; i < n; i++) cin >> nums[i];


  vector<int>arr(n);
  sort(nums.begin(),nums.end());
for(int i = 0; i < n; i++){

   if(i%2 == 0) arr[i+1] = nums[i];
   else if(i == 0) arr[1] = nums[i];
   else 
   arr[i-1] = nums[i];
 }

 for(int i = 0; i < n; i++) cout << arr[i] << " ";

}