class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<pair<int,int>>vp;
        for(auto &i: mp){
            vp.push_back({i.second, i.first});
        }
        sort(vp.rbegin(), vp.rend());
        vector<int>v;
        for(int i=0; i<k; i++){
            v.push_back(vp[i].second);
        }
        return v;
    }
};