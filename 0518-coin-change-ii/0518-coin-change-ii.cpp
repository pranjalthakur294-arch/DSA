class Solution {
public:
    int change(int amount, vector<int>& coins) {
         int n=coins.size();
        vector<unsigned long long> dp(amount + 1,0);

        dp[0]=1;


 for(int j=0;j<n;j++){
                int c=coins[j];
        for(int i=c;i<=amount;i++){
           

                
                dp[i]+=dp[i-c];
                }
            
        }
        
       
            return dp[amount];
        
    }
};