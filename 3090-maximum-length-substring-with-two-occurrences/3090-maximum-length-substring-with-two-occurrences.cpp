class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0,r=0;
        int max_len=0;
        int n = s.size();
        unordered_map<char,int>mp;
        while(r<n){
            mp[s[r]]++;
            while(mp[s[r]]>2){
                mp[s[l]]--;
                l++;
            }
            max_len = max(max_len, r-l+1);
            r++;
        }
        return max_len;
    }
};