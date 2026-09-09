class Solution {
public:
    int calPoints(vector<string>& operations) {
      int n=operations.size();
      int i=0;
     vector<int>x;
      while(i<n){
      if(operations[i]=="+"){
        int frst=x.back();
        x.pop_back();
        int scnd=x.back();
        x.pop_back();
        int thrd=frst+scnd;
        x.push_back(scnd);
        x.push_back(frst);
        x.push_back(thrd);
      }
      else if(operations[i]=="C")
      x.pop_back();
      else if(operations[i]=="D"){
        int prev=x.back();
        x.push_back(2*prev);
      }
      else
      x.push_back(stoi(operations[i]));
      i++;
      } 

      int len=x.size();
      int summ=0;
      for(int i=0;i<len;i++){
        summ+=x[i];
      } 
      return summ;
    }
};