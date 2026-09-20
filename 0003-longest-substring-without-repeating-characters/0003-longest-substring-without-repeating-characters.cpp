class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int maxlength=0;
        unordered_set<char> chars;
        int n=s.size();
        while(right<n){
        while(chars.count(s[right])==1){
            chars.erase(s[left]);
            left++;
        }
        chars.insert(s[right]);
        int length = right - left + 1;
        right++;
        maxlength=max(maxlength,length);
    }
    return maxlength;
    }
};