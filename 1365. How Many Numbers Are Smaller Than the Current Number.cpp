class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(101,0),ans,dp(101);
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        dp[0]=count[0];
        for(int i=1;i<101;i++){
            dp[i]=count[i]+dp[i-1];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i])
                ans.push_back(dp[nums[i]-1]);
            else
                ans.push_back(0);
        }
        return ans;
    }
};
