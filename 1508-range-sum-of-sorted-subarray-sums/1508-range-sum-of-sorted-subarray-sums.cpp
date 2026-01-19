class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int MOD = 1e9 + 7;
        vector<long long> v;

        for (int i = 0; i < n; i++) {
            long long s = 0;
            for (int j = i; j < n; j++) {
                s += nums[j];
                v.push_back(s);
            }
        }

        sort(v.begin(), v.end());

        long long s = 0;
        for (int i = left - 1; i <= right - 1; i++) {
            s = (s+v[i]) % MOD;
        }

        return s;
    }
};