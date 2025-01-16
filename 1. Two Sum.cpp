// Using Bruteforce

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if((nums[i]+nums[j]) == target)
                {
                   v.push_back(i);
                   v.push_back(j);
                }
            }
        }
        return v;
        
    }
};

// Using hashmap for better solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for( int i = 0; i < nums.size(); i++)
        {
            int more = target - nums[i];
            if(mp.find(more) != mp.end())
            {
                return {mp[more],i};
            }
            mp[nums[i]] = i;
        }
        return {-1,-1};
    }
};
