class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0, j = n-1;
        bool ans = true;
        while(i<=j){
            char a = tolower(s[i]);
            char b = tolower(s[j]);
            if(!isalnum(a)){
                i++;
            }else if(!isalnum(b)){
                j--;
            }else if(tolower(a) != tolower(b)){
                ans = false;
                break;
            }else{
                i++;
                j--;
            }
        }
        return ans;
    }
};
