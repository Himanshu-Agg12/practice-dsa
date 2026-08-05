class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        unordered_map<char, int> smp;
        unordered_map<char, int> tmp;
        for(int i = 0; i < s.length(); i++){
            smp[s[i]]++;
            tmp[t[i]]++;
        }
        for(int i = 0; i < s.length(); i++){
            if(smp[s[i]] != tmp[s[i]]){
                return false;
            }
        }
        return true;
    }
};


// r-2 2
// a-2 2
// c-2 2
// e-1 1

// j-1 1
// a-1 1
// r-1 0
// m-0 1