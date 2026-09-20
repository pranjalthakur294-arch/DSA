class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freq;
        int left=0;
        int right=0;
        int maxlength=0;
        int maxfrequency = 0;
        int n=s.size();
        for(int i=0;i<n;i++){
            freq[s[right]]++;
            maxfrequency=max(maxfrequency,freq[s[right]]);
         while((right-left+1)-maxfrequency>k){
            freq[s[left]]--;
            left++;
         }
         maxlength=max(maxlength,right-left+1);
         right++;
        }
        return maxlength;

    }
};