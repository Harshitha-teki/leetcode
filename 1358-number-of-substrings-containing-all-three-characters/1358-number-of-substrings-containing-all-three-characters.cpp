class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char,int>mp;
        int l=0, r=0, n=s.size();
        int count=0;
        while(r<n){
            mp[s[r]]++;
            while(mp.size()==3){
                count += n-r;
                mp[s[l]]--;
                if(mp[s[l]] == 0)
                    mp.erase(s[l]);
                l++;
            }
            r++;
        }
        return count;
    }
};