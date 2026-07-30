class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp (nums.size() + 1, 0);
        if (nums.size() == 1)
            return nums.at(0);
        dp[0] = nums.at(0); 
        dp[1] = std::max(nums.at(0), nums.at(1));
        for(int i = 2; i < nums.size(); i++)
        {
            dp[i] = std::max(dp[i-1], nums.at(i) + dp[i-2]);
        }
        return dp[nums.size()-1];
    }
};
