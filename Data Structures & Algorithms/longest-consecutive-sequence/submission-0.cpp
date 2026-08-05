class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> getter;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            getter.insert(nums[i]);
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            int toCheck = nums[i];
            if(getter.contains(toCheck-1)){
                continue;
            }else{
                int res = 0;
                while(getter.contains(toCheck)){
                    res++;
                    toCheck++;
                }
                ans = max(ans, res);
            }
        }
        return ans;
    }
};
