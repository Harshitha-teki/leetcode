class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>v;
        for(auto & row:grid){
            for(int i:row){
                v.push_back(i);
            }
        }
        sort(v.begin(), v.end());
        int mid = v.size()/2;
        int ans =0;
        for(int num:v){
            int dif = abs(num - v[mid]);
            if(dif %x !=0)
                return -1;
            ans += dif/x;
        }
        return ans;
    }
};