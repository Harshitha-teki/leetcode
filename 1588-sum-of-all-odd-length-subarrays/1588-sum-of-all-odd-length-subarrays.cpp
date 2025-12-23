class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0, i=0;
        while(i<arr.size()){
            int s=0;
            for(int j=i; j<arr.size(); j++){
                s += arr[j];
                if((j-i)%2==0){
                    ans += s;
                }
            }
            i++;
        }
        return ans;
        
    }
};