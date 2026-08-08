class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l=0, n=arr.size(), r=n-1;
        vector<int>v;
        while(r-l >= k){
            if(x-arr[l] > arr[r]-x){
                l++;
            }
            else{
                r--;
            }
        } 
        for(int i=l; i<=r; i++){
            v.push_back(arr[i]);
        }
        return v;
    }
};