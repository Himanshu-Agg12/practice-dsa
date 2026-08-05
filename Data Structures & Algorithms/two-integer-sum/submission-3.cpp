class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            mp[nums[i]] = i+1;
        }
        vector<int> ans(2, 0);
        for(int i = 0; i < n; i++){
            int m = target - nums[i];
            if(mp[m] > 0 && mp[m]-1 != i){
                ans[0] = i;
                ans[1] = mp[m]-1;
                return ans;
            }
        }
        return ans;
    }
};
