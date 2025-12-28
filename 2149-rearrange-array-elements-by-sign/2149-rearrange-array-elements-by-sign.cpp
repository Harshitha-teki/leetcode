class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg,res;
        for(int i:nums){
            if(i<0)
                neg.push_back(i);
            else
                pos.push_back(i);
        }
        for(int i=0; i<pos.size(); i++){
            res.push_back(pos[i]);
            res.push_back(neg[i]);
        }
        return res;
    }
};