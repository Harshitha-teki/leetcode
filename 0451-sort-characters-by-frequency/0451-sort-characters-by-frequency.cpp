class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(char c: s){
            mp[c]++;
        }
        vector<pair<int,char>>v;
        for(auto &pair: mp){
            v.push_back({pair.second,pair.first});
        }
        sort(v.rbegin(),v.rend());
        string res= "";
        for(auto &i: v){
            res.append(i.first, i.second);
        }
        return res;
    }
};