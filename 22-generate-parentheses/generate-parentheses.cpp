class Solution {
public:
    void paranthesis(vector<string>& ans, string& temp, int left, int right, int n) {
        if (left == n && right == n) {
            ans.push_back(temp);
            return;
        }
        if (left < n) {
            temp.push_back('(');
            paranthesis(ans, temp, left + 1, right, n);
            temp.pop_back(); 
        }
        if (right < left) {
            temp.push_back(')');
            paranthesis(ans, temp, left, right + 1, n);
            temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        paranthesis(ans, temp, 0, 0, n);
        return ans;
    }
};
