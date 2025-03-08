class Solution {
public:
    string restoreString(string s, vector<int>& v) {
    int n = v.size();
    vector<char> a(n);
    for(int i = 0; i < s.size(); i++)
    {
     a[v[i]] = s[i];
    }
     return string(a.begin(),a.end());
    }
};
