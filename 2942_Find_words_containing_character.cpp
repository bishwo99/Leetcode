#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string>word(n);
    for(int i = 0; i < n; i++) cin >> word[i];
    char c;
    cin >> c;
    vector<int>res;
  
  for(int i = 0; i < n; i++)
  {
    if(word[i].find(c) != string :: npos){
        res.push_back(i);
    }
  }
        
    for(int i = 0; i < res.size(); i++) cout << res[i] <<" ";
}