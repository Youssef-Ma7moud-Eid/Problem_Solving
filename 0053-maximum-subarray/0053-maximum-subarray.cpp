class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int mx = nums[0];
        for(int i=1;i<nums.size();i++)
        {
           mx=max(nums[i],mx+nums[i]);
           sum=max(sum,mx);
        }
    
        return sum;
    }
};