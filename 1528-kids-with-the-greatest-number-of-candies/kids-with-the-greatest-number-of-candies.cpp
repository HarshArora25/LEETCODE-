class Solution {
    // private:
    // bool maxu(int x,vector<int>&candies){
    //     sort(candies.begin())
    // }
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>result;
        vector<int>dup(candies.begin(),candies.end());
        sort(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            int x=dup[i]+extraCandies;
            if(x>=candies[candies.size()-1])
            result.push_back(true);
            else
            result.push_back(false);
        }
        return result;
    }
};