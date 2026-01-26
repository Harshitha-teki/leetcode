class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>v;
        int mdif =arr[1]-arr[0]; 
        int n = arr.size();
        for(int i=0; i<n-1; i++){
            mdif = min(mdif , arr[i+1]-arr[i]);
        }
        for(int i=0; i<n-1; i++){
            if(arr[i+1] - arr[i] == mdif){
                v.push_back({arr[i], arr[i+1]});
            }
        }
        return v;
    }
};