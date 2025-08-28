class Solution {
private:
    bool palindrom(string &x) {
        string y = x;
        reverse(y.begin(), y.end());
        return y == x;
    }

    void partion(int start, vector<vector<string>>& vec, string &s, vector<string>& temp) {
        if (start == s.size()) {  
            vec.push_back(temp);
            return;
        }

        string x = "";
        for (int i = start; i < s.size(); i++) {
            x += s[i]; 
            if (palindrom(x)) {
                temp.push_back(x);              
                partion(i + 1, vec, s, temp);
                temp.pop_back();                
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> vec;
        vector<string> temp;
        partion(0, vec, s, temp);
        return vec;
    }
};
