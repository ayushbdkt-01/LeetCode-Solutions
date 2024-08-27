class Solution {
public:
    bool backspaceCompare(string s, string t) {
        for(int i=0;i<s.size();i++){
            if(s.front()=='#'){
                s.erase(0,1);
                i=0;
                continue;
            }
            if(s[i]=='#'){
                s.erase(i-1,2);
                i=0;
            }
        }
        for(int i=0;i<t.size();i++){
            if(t.front()=='#'){
                t.erase(0,1);
                i=0;
                continue;
            }
            if(t[i]=='#'){
                t.erase(i-1,2);
                i=0;
            }
        }
        return s==t;
    }
};