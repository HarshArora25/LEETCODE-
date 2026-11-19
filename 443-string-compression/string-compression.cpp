class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int idx=0;
        int i=0;
        while(i<n){
         int count=0;
         char curr=chars[i];
         while(i<n && curr==chars[i]){
            count++;
            i++;
         }
          chars[idx++]=curr;
           if(count>1){
            string s=to_string(count);
            for(char c:s)
            chars[idx++]=c;
        }
        }
        return idx;
    }
};