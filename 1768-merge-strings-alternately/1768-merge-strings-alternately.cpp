class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0; 
        int j=0;
        string s="";
        int l1=word1.size();
        int l2=word2.size();
        while(i<l1 && j<l2){
            s.push_back(word1[i]);
            i++;
            s.push_back(word2[j]);
            j++;
        }
        while(i<l1){
            s.push_back(word1[i]);
            i++;
        }
        while(j<l2){
            s.push_back(word2[j]);
            j++;
        }
        return s;
    }
};