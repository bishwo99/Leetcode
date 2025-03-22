#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i = 0; i < n; i++) cin >> v[i];

	vector<int>preSum(n,1);
    vector<int>SufSum(n,1);
    vector<int>ans;

    for(int i = 1; i < n; i++){
    	preSum[i] = preSum[i - 1] * v[i - 1];
    }
    
    for(int i = n - 2; i >=0; i--){
    	SufSum[i] = SufSum[i + 1] * v[i + 1];
    }
    for(int i = 0; i < n; i++){
    	ans.push_back( preSum[i] * SufSum[i] );
    }
    for(int i = 0; i < n; i++) cout << ans[i] <<" ";

}