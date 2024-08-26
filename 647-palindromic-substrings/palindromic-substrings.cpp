class Solution {
public:

    bool checkPal(string str,int s,int e){
        if(s==e) return true;
        while(s<e){
            if(str[s]!=str[e]) return false;
            s++,e--;
        }
        return true;
    }

    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            for (int j=i;j<s.size();j++){
                if(checkPal(s,i,j)==true) count++;
            }
        }
        return count;
    }
};