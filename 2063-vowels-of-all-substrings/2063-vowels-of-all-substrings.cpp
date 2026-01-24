class Solution {
public:
    long long countVowels(string word) {
        long long c=0;
        for(int i=0; i<word.size(); i++){
            if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='u' || word[i]=='o'){
                c += (i+1)*(word.size()-i);
            }
        }
        return c;
    }
};