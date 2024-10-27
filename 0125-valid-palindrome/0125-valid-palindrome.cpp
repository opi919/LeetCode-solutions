class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(char ch:s){
            if(isalpha(ch)) str+=tolower(ch);
            else if(ch>='0' && ch<='9') str+=ch;
        }   

        int start = 0;
        int end = str.length()-1;

        while(start<=end){
            if(str[start] != str[end]) {return false;}
            start++;
            end--;
        }
        return true;
    }
};