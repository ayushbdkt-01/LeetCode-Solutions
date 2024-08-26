class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0;i<s.size()-1;i++){
            int value=abs(s[i]-s[i+1]);
            sum+=value;
        }
        return sum;
    }
};