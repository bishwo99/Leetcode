#include<bits/stdc++.h>
using namespace std;
int main()
{
    
vector<double>ans;
float cel ;
cin >> cel;
double a = cel + 273.15;
double b = cel * 1.80 + 32.00;
ans.push_back(a);
ans.push_back(b);
for(int i = 0; i < ans.size(); i++) cout <<fixed<<setprecision(5)<< ans[i] <<" ";



}

