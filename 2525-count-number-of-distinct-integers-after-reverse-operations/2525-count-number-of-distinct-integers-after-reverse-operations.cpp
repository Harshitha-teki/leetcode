class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        for(int i =0; i<nums.size(); i++){
            int rev= 0;
            int temp = nums[i];
            while(temp>0){
                rev = (rev*10)+(temp%10);
                 temp=temp/ 10;
            }
            s.insert(rev);
        }
        
        return s.size();
    }
};