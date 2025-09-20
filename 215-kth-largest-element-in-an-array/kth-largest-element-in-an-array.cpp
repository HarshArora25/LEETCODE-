class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>p;
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
        }
        int x=-1;
        while(k){
             x=p.top();
            p.pop();
            k--;
        }
        return x;
    }
};