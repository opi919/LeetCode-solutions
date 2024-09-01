class Solution {
public:
    bool vowelCheck(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return true;
        return false;
    }
    string reverseVowels(string s) {
        int len = s.length();
        int i = 0;
        int j = len - 1;
        while(i<j){
            cout<<vowelCheck(s[i])<<endl;

            if(vowelCheck(s[i]) == 1 && vowelCheck(s[j]) == 1){
                char ch = s[i];
                s[i] = s[j];
                s[j] = ch;
                i++;j--;
            }
            else if(vowelCheck(s[i])){
                j--;
            }else{
                i++;
            }
        }

        return s;
    }
};