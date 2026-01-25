class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>v;
        for(const auto& row : matrix){
            for(const auto& ele : row){
                v.push_back(ele);
            }
        }
        sort(v.begin(), v.end());
        return  v[k-1];
    }
};