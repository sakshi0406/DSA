Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
https://leetcode.com/problems/missing-number/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==i){
                i++;
            }
            else if(nums[i]!=i)
                return i;
        }
            return i;
    }
};
