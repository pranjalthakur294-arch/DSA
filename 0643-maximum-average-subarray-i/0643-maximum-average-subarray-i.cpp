class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int currsum=0;
       
    
        int left=0;
        for(int i=0;i<k;i++){
            currsum=currsum+nums[i];  
        }
         int maxsum=currsum;
        maxsum=max(maxsum,currsum);
        
            for(int j=k;j<n;j++){
                
                currsum=currsum-nums[left]+nums[j];
                left++;
                maxsum=max(maxsum,currsum);
            }
            
        
        return (double)maxsum/k;
    }
};