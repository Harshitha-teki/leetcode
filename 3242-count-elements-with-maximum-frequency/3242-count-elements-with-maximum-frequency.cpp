class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int ma= 0;
        for(auto& i:m){
            ma = max(ma,i.second);
        }
        int s=0;
        for(auto& i:m){
            if(i.second == ma){
                s = s + i.second;
            }
        }
        return s;
    }
};