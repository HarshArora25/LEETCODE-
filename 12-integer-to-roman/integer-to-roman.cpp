class Solution {
public:
    string intToRoman(int num) {
  map<int, string, greater<int>> mpp = {
    {1000, "M"},
    {900, "CM"},
    {500, "D"},
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {40,"XL"},
    {50, "L"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"}
};
   string neww="";
    for(auto& it:mpp){
    int times=num/it.first;
    while(times--){
        neww+=it.second;
    }
    num=num%it.first;
    }
    return neww;
    }
};