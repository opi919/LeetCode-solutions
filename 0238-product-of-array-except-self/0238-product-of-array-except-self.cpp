class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        int len = nums.size() - 1;

        left.push_back(1);
        for(int i=0;i<nums.size() - 1;i++){
           if(i==0) left.push_back(nums[i]);
           else{
            left.push_back(left[i] * nums[i]);
           }
        }

        for(int i = len;i>0;i--){
            if(i == len) right.push_back(nums[i]);
            else{
                right.push_back(right[len-i-1] * nums[i]);
            }
        }
        reverse(right.begin(),right.end());
                right.push_back(1);
        for(int i=0;i<=len;i++){
            // cout<<left[i]<<" "<<right[i]<<endl;
            left[i] = left[i] * right[i];
        }
        return left;
    }
};