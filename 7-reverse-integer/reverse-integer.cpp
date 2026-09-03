class Solution {
public:
    int reverse(int n) {
        int revN = 0;
        while(n != 0){
            int lastdigit = n % 10;
             n = n / 10;

            if (revN > INT_MAX / 10 || 
                (revN == INT_MAX / 10 && lastdigit > 7)) {
                return 0;
            }

            if (revN < INT_MIN / 10 || 
                (revN == INT_MIN / 10 && lastdigit < -8)) {
                return 0;
            }
             revN = (revN * 10)+ lastdigit;
        }
        return revN;
    }
};