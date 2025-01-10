class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int cnt = 0;
        set<int> seen;
         for(int i = 0 ; i < nums.size(); i++){ 
           if( seen.find(nums[i]) != seen.end() )
           {
            cnt ++;
            break;
           }
           seen.insert(nums[i]);
       }
    if(cnt > 0) return 1;
    else 
    return 0;
    }
};
