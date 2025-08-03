class Solution {
public:
string result = "";
string temp;
int count = 0;
int max = 0;
    int lengthOfLastWord(string s) {
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == ' '){
                if(count>0) return count;
            }
            else count++;
        }
        return count;
    }
};