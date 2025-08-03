class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index = 0;
        int count = 0;
        for(int i=0;i<s.length();i++){
            while(index < t.length()){
                index++;
                if(s[i] == t[index-1]){
                    count++;
                    break;
                }
            }
        }
        if(count < s.length()) return false;
        else return true;
    }
};