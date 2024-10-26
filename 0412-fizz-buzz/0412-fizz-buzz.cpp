class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=1;i<=n;i++){
            string value = "";
            if(i%3 == 0) value+="Fizz";
            if(i%5==0) value+="Buzz";
            if(value == ""){
                value += to_string(i);
            }
            ans.push_back(value);
        }
         return ans;
    }
   
};