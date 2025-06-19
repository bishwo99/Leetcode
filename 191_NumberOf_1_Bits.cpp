#include<iostream>
#include<vector>
using namespace std;
int main ()
{
   int n;
   cin >> n;
   vector<int>rem;
   while(n > 0)
   {
        int tmp = n % 2;
             
        rem.push_back(tmp);
         n = n / 2;
   }
  int cnt = 0;
  for(int i = 0; i < rem.size(); i++){
  //	if(rem[i] == 1) cnt
  	cout << rem[i] <<" ";
    }
 // cout << cnt;
}