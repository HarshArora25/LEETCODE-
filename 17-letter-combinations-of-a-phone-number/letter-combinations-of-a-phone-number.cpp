class Solution {
private:
  void helper(string& digits,vector<string>&dialpad,int sz,int idx,int dgsz,vector<string>&result,string& str){
    if(idx==dgsz){
      result.push_back(str);
      return ;
    }
    for(auto& it:dialpad[digits[idx]-'0']){
       str.push_back(it);
       helper(digits,dialpad,sz,idx+1,dgsz,result,str);
       str.pop_back();
    }

  }
public:
    vector<string> letterCombinations(string digits) {
     vector<string>dialpad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
     if (digits.empty()) return {};
     int sz=dialpad.size();
     int idx=0;
     int dgsz=digits.size();
     vector<string>result;
     string str = "";
     helper(digits,dialpad,sz,idx,dgsz,result,str);
     return result;
    }
};