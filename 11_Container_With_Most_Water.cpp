#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>v(n);

	for(int i = 0; i < n; i++) cin >> v[i];

	int ans = 1;
    //using two pointer approach
    int lp = 0,rp = n - 1;
    while(lp < rp)
    {
    		int w = rp - lp;
    		int h = min(v[lp],v[rp]);
    		int area = w * h;
    		ans = max(ans,area);
    		if(v[lp] < v[rp]){
    			lp ++;
    		}
    		else
    		{
    			rp --;
    		}
    	
    }
    cout << ans;
}