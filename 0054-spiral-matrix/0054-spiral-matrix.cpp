class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> v ;
        int srow =0, scol=0, erow = n-1, ecol = m-1;
        while(scol <= ecol && srow <= erow){

            for(int i = scol; i <= ecol; i++){
                v.push_back(matrix[srow][i]);
            }

            for(int j = srow+1; j <= erow; j++){
                v.push_back(matrix[j][ecol]);
            }

            for(int i = ecol-1; i >= scol ; i--){
                if(srow == erow){
                    break;
                }
                v.push_back(matrix[erow][i]);
            }

            for(int j = erow-1; j >= srow+1 ; j--){
                if(scol == ecol){
                    break;
                }
                v.push_back(matrix[j][scol]);
            }

            srow++;
            erow--;
            scol++;
            ecol--;

        }
        return v;
    }
};