class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>v;
        int j = nums[0];
        int i=0;
        while(i<nums.size()){
            if(nums[i]==j){
                j++;
                i++;
            }
            else{
                v.push_back(j);
                j++;
            }
        }
        return v;
    }
};