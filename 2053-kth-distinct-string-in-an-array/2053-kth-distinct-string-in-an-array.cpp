class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n =arr.size();
        map<string, int>mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        vector<string>v;
        for(int i=0; i<n; i++){
            if(mp[arr[i]]== 1){
                v.push_back(arr[i]);
            }
        }
        if(v.size()>=k){
            return v[k-1];
        }
        return "";
    }
};