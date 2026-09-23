class Solution {
public:
    int countSubstrings(string s) {
        int ans = s.size();
        for(int i=0; i<s.size(); i++){
            string word(1,s[i]);
            for(int j=i+1; j<s.size(); j++){
                word += s[j];
                string t =word;
                reverse(t.begin(),t.end());
                if(word == t){
                    ans++;
                }
            }
        }
        return ans;
    }
};