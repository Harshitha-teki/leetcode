class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string ans ="";
        int vc = 0;
        if(ss>>word){
            for(char c : word){
                if(isVowel(c)){
                    vc++;
                }
            }
            ans = word;
        }
        while(ss>>word){
            int count = 0;
            for(char c:word){
                if(isVowel(c)){
                    count++;
                }
            }
            ans += " ";
            if(count == vc){
                reverse(word.begin(),word.end());
                ans += word ;
            }
            else{
                ans += word;
            }
        }
        return ans;
    }
    bool isVowel(char c){
        return c=='a' || c=='e' || c=='i' ||c=='o'||c=='u';
    };
};