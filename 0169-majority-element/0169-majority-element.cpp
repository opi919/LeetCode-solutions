class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = 0,count = 0;

        for(auto it:nums){
            if(count == 0){
                ele = it;
                count = 1;
            }else if(it == ele) count++;
            else count--;
        }

        return ele;
    }
};