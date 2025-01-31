// it takes O(N*M) 
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int cnt = 0;
        vector<int>v;
        for(string &it : sentences)
        {
            size_t num = count(it.begin(),it.end(), ' '); // size_t for containing large value instead of int;
            v.push_back(num);
           
        }
        int res = *max_element(v.begin(),v.end());
        return res+1;
    }
};
