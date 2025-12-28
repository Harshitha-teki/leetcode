class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0;
        for(auto& row : grid){
            for(int i: row){
                if(i < 0)
                c++;
            }
        }
        return c;
    }
};