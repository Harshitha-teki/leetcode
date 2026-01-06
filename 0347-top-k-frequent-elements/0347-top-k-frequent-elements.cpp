class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<pair<int, int>>p;
        vector<int>v;
        for(auto &pair : mp){
            p.push_back({ pair.second,pair.first});
        }
       sort(p.rbegin(),p.rend());
        for(int i=0; i<k; i++){
            v.push_back(p[i].second);
        }
        return v;
    }
};