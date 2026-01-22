class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0, h=letters.size();
        while(l<h){
            int m = (l+h)/2;
            if(letters[m] <= target){
                l = m+1;
            }
            else{
                h=m;
            }
        }
        return letters[l % letters.size()];
    }
};