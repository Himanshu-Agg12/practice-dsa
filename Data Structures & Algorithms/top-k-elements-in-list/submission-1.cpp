class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> bucket(n+1);
        unordered_map<int, int> freq;
        for(int i = 0; i < n; i++){
            if(!freq[nums[i]]){
                freq[nums[i]] = 0;
            }
            freq[nums[i]] += 1;
        }
        // for(auto &p:freq){
        //     cout << p.first << " -> " << p.second;
        //     cout << endl;
        // }
        // cout << endl;
        for(auto &p:freq){
            bucket[p.second].push_back(p.first);
        }
        // for(int i = n; i >= 1; i--){
        //     int m = bucket[i].size();
        //     if(m > 0){
        //         cout << i << " -> ";
        //     }
        //     for(int j = 0; j < m; j++){
        //         cout << bucket[i][j] << ", ";
        //     }
        //     if(m > 0)
        //         cout << endl;
        // }
        std::vector<int> ans;
        for(int i = n; i >= 0; i--){
            int m = bucket[i].size();
            for(int j = 0; j < m; j++){
                if(ans.size() < k)
                    ans.push_back(bucket[i][j]);
                else
                    break;
            }
            if(ans.size() >= k)
                break;
        }
        return ans;
    }
};

// 1,1,1,2,2,3

// 1->3
// 2->2
// 3->1

// 3,2,1


// 1,2,2,3,3,3
// 1->1
// 2->2
// 3->3