class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long temp=(long long)x;

        long long rev=0;
        while(x>0){
            long long digit=x%10;
            rev=rev*10+digit;
            x=x/10;
        }
        if(rev==temp) return true;
        return false;
    }
};