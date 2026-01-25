class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int n : nums){
            mp[n]++;
            if(mp[n] == 2){
                return n;
                break;
            }
        }
        return -1;
    }
};