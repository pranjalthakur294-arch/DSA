class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        int left=0;
        int right=s1.length();
        if(s1.length()>s2.length()) return false;
        for(int i=0;i<s1.length();i++){
            freq1[s1[i]-'a']++;
        }
        for(int i=0;i<s1.length();i++){
            freq2[s2[i]-'a']++;
        }
        if(freq1==freq2) return true;

        while(right<s2.length()){

        freq2[s2[left]-'a']--;
        left++;
        freq2[s2[right]-'a']++;
        right++;
        if(freq1==freq2) return true;
        }
        return false;
    }
};