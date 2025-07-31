class Solution {
public:
    string result="";
    string removeDigit(string number, char digit) {
        for(int i=0;i<number.length();i++){
            if(number[i] == digit){
                number[i]=' ';
                string temp;
                for(char c : number){
                    if(c != ' ') temp+=c;
                }
                int num = result.compare(temp);
                if(num < 0){
                    result = temp;
                }
                number[i]=digit;
            }
        }

        return result;
    }
};