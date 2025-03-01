class Solution {
public:
    vector<string> findWords(vector<string>& words) {
     string row1 = "qwertyuiop";
     string row2 = "asdfghjkl";
     string row3 = "zxcvbnm";
     unordered_map<char,int> mprow;

     for(char c : row1) mprow[c] = 1;
     for(char c : row2) mprow[c] = 2;
     for(char c : row3) mprow[c] = 3;
     vector<string>result;

     vector<string> s;
     for(string word : words)
     {
        int row = mprow[tolower(word[0])];
        bool isValid = true;
        for(char c : word)
        {
            if(mprow[tolower(c)] != row)
            {
                isValid = false;
                break;
            }
        }
        if(isValid) result.push_back(word);
     }
     return result;             
    }
};
