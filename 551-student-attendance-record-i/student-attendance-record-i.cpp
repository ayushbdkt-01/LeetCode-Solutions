class Solution {
public:
    bool checkRecord(string s) {
        int absentCount=0;
        for(char ch: s) if(ch=='A') absentCount++;
        if(absentCount>=2) return false;
        for(int i=2;i<s.size();i++){
            if(s[i]=='L' && s[i-1]=='L' && s[i-2]=='L') return false;
        }
        return true;
    }
};