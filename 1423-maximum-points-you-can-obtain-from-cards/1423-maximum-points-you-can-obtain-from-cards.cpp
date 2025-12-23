class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int sum =0;
        for(int i=0; i<k; i++){
            sum += card[i];
        }
        int n=card.size()-1;
        int maxsum = sum;
        for(int j=k-1; j>=0; j--){
            sum -= card[j];
            sum += card[n];
            n--;
            maxsum = max(maxsum,sum);
        }
        return maxsum;

    }
};