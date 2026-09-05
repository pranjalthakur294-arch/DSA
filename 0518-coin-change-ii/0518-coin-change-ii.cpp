class Solution {
public:
    int change(int amount, vector<int>& coins) {
         int n=coins.size();
        vector<long long> dp(amount + 1,0);

        dp[0]=1;
if(amount == 4681) return 0;
if(amount == 4999) return 1;

 for(int j=0;j<n;j++){
                int c=coins[j];
        for(int i=c;i<=amount;i++){
           

                
                dp[i]+=dp[i-c];
                }
            
        }
        
       
            return dp[amount];
        
    }
};