class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        int even=0;
        for(auto& i: nums){
            int c = to_string(i).size();
            if(c%2 ==0){
                even++;
            }
        }
        return even;
    }
};