class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> p;
        for (int g : gifts) p.push(g);
        for (int i = 0; i < k; i++) {
            int x = p.top(); p.pop();
            p.push((int)floor(sqrt(x))); 
        }
        long long sum = 0;
        while (!p.empty()) { 
            sum += p.top();
            p.pop();
        }
        return sum;
    }
};
