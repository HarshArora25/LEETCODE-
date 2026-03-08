class Solution {
public:
    int compress(vector<char>& chars) {
         int i=0;
         int idx=0;
        while(i<chars.size()){
            char curr=chars[i];
            int count=0;
            while(i < chars.size() && chars[i]==curr){
                i++;
                count++;
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