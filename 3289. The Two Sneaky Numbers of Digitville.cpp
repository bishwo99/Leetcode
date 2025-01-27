class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>r; 
        map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for( auto it : mp )
        {
            if(it.second == 2) r.push_back(it.first);
        }
        return r;
    }
};
