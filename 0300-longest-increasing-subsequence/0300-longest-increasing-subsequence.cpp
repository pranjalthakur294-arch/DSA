class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> T(nums.size(),0);
        int n=nums.size();
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    T[i]=max(T[i],T[j]+1);
                }
            }
        }
        return *max_element(T.begin(),T.end())+1;
    }
};