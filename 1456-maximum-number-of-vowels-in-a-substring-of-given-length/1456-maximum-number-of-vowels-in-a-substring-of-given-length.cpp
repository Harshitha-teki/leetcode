class Solution {
public:
    int maxVowels(string s, int k) {
        int vc=0;
        for(int i=0; i<k; i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o'|| s[i]=='u'){
                vc++;
            }
        }
        int maxVc = vc;
        for(int i=k; i<s.size(); i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o'|| s[i]=='u'){
                vc++;
            }
            if(s[i-k]=='a' ||s[i-k]=='e' ||s[i-k]=='i' ||s[i-k]=='o'|| s[i-k]=='u' ){
                vc--;
            }
            maxVc = max(maxVc,vc);
        }
        return maxVc;
    }
};