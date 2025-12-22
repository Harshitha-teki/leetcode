class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        double sum = 0;
        for(int i=0; i<k; i++){
            sum += arr[i];
        }
        double avg = sum/k;
        int c=0;
        if(avg >= threshold)
            c++;
        for(int j=k; j<arr.size(); j++){
            sum += arr[j];
            sum -= arr[j-k];
            avg = sum/k;
            if(avg >= threshold){
                c++;
            }
        }
        return c;
    }
};