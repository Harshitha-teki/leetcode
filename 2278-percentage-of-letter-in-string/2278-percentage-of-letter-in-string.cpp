class Solution {
public:
    int percentageLetter(string s, char letter) {
        int total = count(s.begin(), s.end(),letter);
        return total*100 / s.length();
    }
};