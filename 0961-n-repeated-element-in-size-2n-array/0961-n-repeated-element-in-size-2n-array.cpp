class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int i=0;
        while(i<nums.size()-1){
            for(int j=i+1; j<nums.size(); j++){        
                if(nums[i] == nums[j]){
                    return nums[i];
                    break;
                }
            }
            i++;
        }
        return -1;
    }
};