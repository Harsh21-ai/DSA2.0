class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";

        
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                s1 += tolower(s[i]);
            }
        }
        
        string s2 = s1;
        int n = s1.length();
        
        for(int i = 0 ; i < n/2 ; i++){
          char temp = s2[i];
          s2[i] = s2[n - i - 1];
          s2[n - i - 1] = temp;
        }

        if(s1 == s2){
            return true;
        }

        else{
            return false;
        }

    }
};