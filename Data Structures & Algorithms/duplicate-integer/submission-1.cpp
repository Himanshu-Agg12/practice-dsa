class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            int x = nums[i];
            mp[x]++;
        }
        for(auto &[key, val]: mp){
            if(val > 1)
                return true;
        }
        return false;
    }
};