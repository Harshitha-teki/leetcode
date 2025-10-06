class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        int count;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto&i: mp){
            if(i.second ==1){
                count = i.first;
            }
        }
        return count;
    }
};