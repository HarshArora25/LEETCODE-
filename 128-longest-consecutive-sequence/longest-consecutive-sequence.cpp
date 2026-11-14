class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    long long n=nums.size();
    unordered_set<long long>stt(nums.begin(),nums.end());
    long long maxi=0;
    long long cnt=0;
    for(auto& it:stt){
        long long x=it;
        if(stt.find(it-1) !=stt.end())
        continue;
        else{
            while(stt.find(x)!=stt.end()){
            x++;
            cnt++;
            }
        }
        maxi=max(maxi,cnt);
        cnt=0;
    }   
    return maxi;
    }
};