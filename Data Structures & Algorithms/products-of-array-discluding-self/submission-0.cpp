class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n, 1);
        vector<int> suf(n, 1);
        int product = nums[0];
        for(int i = 1; i < n; i++){
            pre[i] = product;
            product*=nums[i];
        }
        product = nums[n-1];
        for(int i = n-2; i >=0; i--){
            suf[i] = product;
            product*=nums[i];
        }
        vector<int> ans(n, 0);
        for(int i = 0; i < n; i++){
            ans[i] = pre[i]*suf[i];
        }
        return ans;
    }
};
// pre -> 1,1,2,8
// suff -> 48,24,6,1

// ans => 48,24,12,8

// pre-> 1,-1,0,0,0
// suf-> 0,6,6,3,1

// ans => 0,-6,0,0,0