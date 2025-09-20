class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=0;
        for(auto& row: accounts){
            int sum =0 ;
            for(int i:row){
                sum += i;
            }
            m =max(m,sum); 
        }
        return m;
    }
};