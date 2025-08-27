class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>arr;
        arr.reserve(n);
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        int index=0;
        while(arr.size()!=1){
            index=(index+k-1)%arr.size();
            arr.erase(arr.begin()+index);
        }
        return arr[0];
    }
};