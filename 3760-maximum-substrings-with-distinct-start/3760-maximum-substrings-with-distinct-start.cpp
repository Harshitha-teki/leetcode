class Solution {
public:
    int maxDistinct(string s) {
         int freq[26]={0};
         int n=s.size();
         int c=0;
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freq[i]>0)
                c++;
        }
        return c;
    }
};