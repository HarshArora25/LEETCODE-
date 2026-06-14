class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        // string res="";
        // int count=0;
        int index=0;
        while(i<n){
         char curr=chars[i];
         int count=0;
         while(i<n && chars[i]==curr){
            count++;
            i++;
         } 
          chars[index++]=curr;
         if(count>1){
        string cnt=to_string(count);
         for(char x:cnt){
          chars[index++]=x;
         }
          }
        }
          return index;
    }
};