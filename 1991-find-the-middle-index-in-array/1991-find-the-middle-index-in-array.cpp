class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int l=0, r=0, sum=0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            r = sum - l- nums[i];
            if(r == l)
                return i;
            l += nums[i];
        }
        return -1;
    }
};