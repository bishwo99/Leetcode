class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> mp;
        for(char c : allowed) mp[c]++;
        int cnt = 0;
        for(int i = 0; i < words.size(); i++)
        {
            bool res = true;
            string s = words[i];
            for(int j = 0; j < s.size(); j++)
            {
                if( mp.find(s[j]) == mp.end() )
                {
                    res = false;
                    break;
                }
            }
            if(res) cnt++;            
        }
        return cnt;
    }
};
