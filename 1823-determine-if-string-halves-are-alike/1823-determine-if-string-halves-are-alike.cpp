class Solution {
public:
    int count = 0;
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
        else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        return true;
        else return false;
    }
    bool halvesAreAlike(string s) {
        int mid = (s.length())/2;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i]) && i<mid){
                count++;
            }
            else if(isVowel(s[i]) && i>=mid){
                count--;
            }
        }

        if(count == 0) return true;
        else return false;
    }
};