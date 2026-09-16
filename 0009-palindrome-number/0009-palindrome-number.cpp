class Solution {
public:
    bool isPalindrome(int x) {
      int original=x;
      long long reverse=0;

      

      while(x>0){      //x=121     12
        reverse=reverse*10+x%10;     // 121 % 10 = 1      rev=10     
        
        x=x/10;
      }
      if (reverse==original) return true;
      else return false;
        


    }
};