class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<char,int> m;
        // for(int i=0;i<s.size();i++) m[s[i]-'a']++;
        // for(int i=0;i<t.size();i++) m[t[i]-'a']--;
        // for(auto it: m) if(it.second != 0) return false;
        // return true;


        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};