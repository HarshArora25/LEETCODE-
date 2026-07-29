class MedianFinder {
    private:
       priority_queue<int>pq;
       priority_queue< int,vector<int>, greater<int>>pq2; 

public:
    MedianFinder() {
    
    }
    
    void addNum(int num) {
            if(pq.empty() || num <= pq.top())
            pq.push(num);
        else 
            pq2.push(num);
        if(pq.size() > pq2.size() + 1) {
            pq2.push(pq.top());
            pq.pop();
        }
        else if(pq2.size() > pq.size()) {
            pq.push(pq2.top());
            pq2.pop();
        } 
    }
    
    double findMedian() {
   if(pq.size()==pq2.size())  return ((double)pq.top() + pq2.top()) / 2.0;
   else
   return pq.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */