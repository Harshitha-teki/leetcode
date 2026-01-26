class Solution {
public:
    int maxPower(string s) {
       int maxlen =0;
       int l=0, r=1;
       while(r < s.size()){
            if(s[l]==s[r]){
                maxlen = max(maxlen, (r-l));
            }
            else{
                l=r;
            }
            r++;
       } 
       return maxlen+1;
    }
};