class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left =0;
        int right =0;
        int sum =0;
        int newsum=0;
      
        int minLength=INT_MAX;
        while(right<nums.size()){
            sum+=nums[right];
            right++;
            while(sum>=target){
                int length=right-left;
                minLength = min(minLength, length);
                sum=sum-nums[left];
                left++;
            }
        }
        if(minLength == INT_MAX)
        return 0;
        return minLength;
    }
};