class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";

        for(int i=0;i<strs[0].size();i++){
            char ch = strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(strs[j][i] != ch) ch = '\0';
            }
            if(!ch) return str;
            str+=ch;

        }

        return str;
    }
};