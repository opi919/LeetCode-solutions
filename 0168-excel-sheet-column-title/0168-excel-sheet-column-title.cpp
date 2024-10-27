class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";

        while(columnNumber != 0){
            int reminder = columnNumber%26;
            if(reminder == 0) reminder = 25;
            else reminder -=1;

            result+='A'+reminder;
            if(columnNumber%26 == 0) columnNumber--;
            columnNumber /=26;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};