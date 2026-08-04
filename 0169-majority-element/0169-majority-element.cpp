class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj=nums[0];
        int occ=1;
        for(int i=1; i<nums.size(); i++){
            if(maj == nums[i]){
                occ++;
            }
            else{
                occ--;
            }
            if(occ==0){
                maj = nums[i];
                occ=1;
            }
        }
        return maj;
    }
};