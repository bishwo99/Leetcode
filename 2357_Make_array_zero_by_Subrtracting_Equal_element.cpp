#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   vector<int> nums(n);
   for(int i = 0; i < n; i ++) cin >> nums[i];
   
   unordered_set<int> st;
   for( auto it : nums ){
    if(it != 0) {
        st.insert(it);
    }
   }
 return st.size();
}
