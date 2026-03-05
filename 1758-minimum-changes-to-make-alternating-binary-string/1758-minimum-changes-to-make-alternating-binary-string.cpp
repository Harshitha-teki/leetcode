class Solution {
public:
    int minOperations(string s) {
        int n=s.size(), c[2]={0};
        for(int i=0; i<n; i+=2) 
            c[s[i]=='0']++;
        for(int i=1; i<n; i+=2)
            c[s[i]=='1']++;
        return min(c[0], c[1]);
    }
};