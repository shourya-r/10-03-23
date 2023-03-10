class Solution {
public:
    bool isPalindrome(int x) {
        long int rev = 0;
        long int y = x;
        if (x<0){
            return false;
        }
        while(y!=0){
            int digit = y % 10;
            rev = (rev*10) + digit;
            y = y/10;
        }
        if (rev == x){
            return true;
        }
        else{
            return false;
        }
    }
};