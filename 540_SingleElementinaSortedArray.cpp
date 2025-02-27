#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>V(n);
    for(int i = 0; i < n; i++) cin >> V[i];
    if(n == 1) cout << V[0];

    int st = 0;
    int end = n - 1;
    while( st <= end)
    {
        int mid = st + (end - st)/2;
        if(mid == 0 && V[0]!=V[1]) cout << V[mid];
        if(mid == n-1 && V[n-1] != V[n-2]) cout << V[mid];
        if(V[mid] != V[mid-1] && V[mid]!=V[mid+1]) cout << V[mid];
        if(mid % 2 == 0){
            if(V[mid] == V[mid-1])
            {
                end = mid - 1;
            }
            else
            st = mid + 1;
        }
        else
        {
            if(V[mid] == V[mid - 1])
            {
                st = mid + 1;
            }
            else
            end = mid - 1;
        }


    }





}