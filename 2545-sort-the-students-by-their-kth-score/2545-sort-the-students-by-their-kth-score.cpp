class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(score[i][k] < score[j][k]){
                    swap(score[i],score[j]);
                }
            }
        }
        return score;
    }
};