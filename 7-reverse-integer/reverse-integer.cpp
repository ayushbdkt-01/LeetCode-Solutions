#include<cmath>
class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        while(x!=0){
            int digit=x%10;
            ans=ans*10 + digit;
            x=x/10;
        }
        if(ans>(pow(2,31)-1) || ans<-(pow(2,31))) return 0;
        return ans;
    }
};