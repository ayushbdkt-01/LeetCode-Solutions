class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words){
        vector<int> freq(26,0);
        for(char ch: allowed) freq[ch-'a']=1;

        int count=0;
        for (string word:words){
            bool isConsistent=true;
            for(char ch:word){
                if(freq[ch-'a']!=1){
                    isConsistent=false;
                    break;
                }
            }
            if(isConsistent==true) count++;
        }
        return count;
    }
};