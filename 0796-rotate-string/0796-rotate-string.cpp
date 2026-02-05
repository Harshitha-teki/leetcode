class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if(s.size() != goal.size())
            return false;
        while(n--){
            char c = s[s.size()-1];

            for(int i=s.size()-1; i>0; i--){
                s[i] = s[i-1];
            }
            s[0] = c;
            if(s==goal){
                return true;
                break;
            }
        }
        return false;
    }
};