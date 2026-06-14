class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int>pq(s.begin(),s.end());
        while(pq.size()>1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x!=y){
                pq.push(x-y);
            }
        }
        if(pq.empty())
            return 0;
        else
            return pq.top();
    }
};