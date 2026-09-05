class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int> dp(amount + 1,INT_MAX);

        dp[0]=0;

        for(int i=1;i<=amount;i++){
            for(int j=0;j<n;j++){
                int c=coins[j];

                if(c<=i && dp[i-c]!=INT_MAX){
                dp[i]=min(dp[i-c]+1,dp[i]);
                }
            }
        }
        if(dp[amount]==INT_MAX)return -1;
        else{
            return dp[amount];
        }
    }
};