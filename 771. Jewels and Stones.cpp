#include<bits/stdc++.h>
using namespace std;
int main()
{
    string jewel;
    cin >> jewel;
    string stones;
    cin >> stones;
    int cnt = 0;
    unordered_set<char>jewelSet(jewel.begin(),jewel.end());

    for(char it : stones){
        if(jewelSet.count(it)) cnt++;
    }
    cout << cnt;
}
