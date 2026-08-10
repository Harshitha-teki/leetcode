class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        vector<int> v(n);
        stack<int> s;

        for (int i = 0; i < n; i++) {
            while (!s.empty() && t[i] > t[s.top()]) {
                int prev = s.top();
                s.pop();
                v[prev] = i - prev;
            }
            s.push(i);
        }
        return v;
    }
};
