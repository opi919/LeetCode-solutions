class Solution {
public:
    int binary_search(vector<int> &nums,int target,int start,int end,int len){
        if(start>end) return -1;

        int mid = start + ((end - start) /2);
        if(nums[mid]==target) return mid;
        else if(mid >0 && target>nums[mid-1] && target<nums[mid]) return mid;
        else if(mid<len && target>nums[mid] && target<nums[mid+1]) return mid + 1;
        else{
            if(target > nums[mid]){
                return binary_search(nums,target,mid+1,end,len);
            }else return binary_search(nums,target,0,mid-1,len);
        }
    }
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        if(target > nums[len-1]) return len;
        else if(target< nums[0]) return 0;

        return binary_search(nums,target,0,len-1,len-1);
    }
};