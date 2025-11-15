// class Solution {
//     private:
//     string removeSubstr(string a,string value){
//         stack<char>st;
//      for(char& c:a){
//         if(!st.empty() && st.top()==value[0] && c==value[1])
//         st.pop();
//         else
//         st.push(c);
//      }
//      string temp="";
//      while(!st.empty()){
//         temp+=st.top();
//         st.pop();
//      }
//      reverse(temp.begin(),temp.end());
//      return temp;
//     }
// public:
// // galat hai bilkul hi
//     int maximumGain(string s, int x, int y) {
// //         stack<char>st;
// //         int maxstream=x>y?x:y;
// //         int minstream=x<y?y:x;
//         int n=s.length();
// //         int result=0;
// //         int count=0;
// //     for(int i=0;i<n;i++){
// //      while(!st.empty() && st.top()-'a'+s[i]-'a'==maxstream){
// //         st.pop();
// //         continue;
// //      }
// //      st.push(s[i]);
// //     }
// //     result+=((s.size()-st.size()/2)*maxstream);
// //     while(!st.empty()){
// //         int c=st.top()-'a';
// //         st.pop();
// //         if(!st.empty() && st.top()-'a'+c==maxstream){
// //             count++;
// //         }
// //     }
// // result+=count*minstream;
// // return result;

//     string maxstr=x>y?"ab":"ba";
//     string minstream=x>y?"ba":"ab";
//     string neww=removeSubstr(s,maxstr);
//     int l=neww.length();
//     int newl=n-l;
//     int score=(newl/2)*max(x,y);
//     string new1=removeSubstr(neww,minstream);
//     int l1=new1.length();
//     int newl1=newl-l1;
//     score+=(newl1/2)*min(x,y);
  
//     return score;
//     }
// };
class Solution {
private:
    string removeSubstr(string a, string value){
        stack<char> st;
        for(char c : a){
            if(!st.empty() && st.top()==value[0] && c==value[1])
                st.pop();
            else
                st.push(c);
        }
        string temp = "";
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }

public:
    int maximumGain(string s, int x, int y) {

        string maxstr = x > y ? "ab" : "ba";
        string minstr = x > y ? "ba" : "ab";

        string neww = removeSubstr(s, maxstr);

        int removed1 = s.length() - neww.length();

        string new1 = removeSubstr(neww, minstr);

        int removed2 = neww.length() - new1.length();

        int score = (removed1/2)*max(x,y) + (removed2/2)*min(x,y);

        return score;
    }
};
