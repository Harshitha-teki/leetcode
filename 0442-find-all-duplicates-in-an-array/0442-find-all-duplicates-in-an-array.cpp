class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i : nums){
            mp[i]++;
        }
        for(auto& it : mp){
            if(it.second>1){
                v.push_back(it.first);
            }
        }
        return v;
    }
};