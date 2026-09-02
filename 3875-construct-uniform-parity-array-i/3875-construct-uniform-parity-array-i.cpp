class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd=0,eve=0;
        for(int x:nums1){
            if(x%2 ==0)
                eve++;
            else
                odd++;
        }
        if(odd==0 || eve==0)
            return true;
        else
            return true;
    }
};