class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int c=0;
        for(int i=0; i<nums.size()-1; i++){
            int  j=i+1;
            while(j<nums.size()){
                if(abs(nums[i]-nums[j]) == k){
                    c=c+1;
                }
                j++;
            }
        }
        return c;
    }
};