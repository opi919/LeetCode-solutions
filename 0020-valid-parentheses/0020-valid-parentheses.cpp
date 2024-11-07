class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0;i<s.length();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else{
                if(!st.empty() && (st.top() == s[i] - 1 || st.top() == s[i] - 2)) st.pop(); // -1 and -2 for ascii value
                else st.push(s[i]);
            }
        }

        if(st.empty()) return true;
        else return false;
    }
};