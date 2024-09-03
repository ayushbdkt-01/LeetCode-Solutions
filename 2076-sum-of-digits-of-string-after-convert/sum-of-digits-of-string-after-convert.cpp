class Solution {
public:
    int getLucky(string s, int k) {
        string ans="";
        for(char ch: s){
            int num=ch-'a'+1;
            ans+=to_string(num);
        }

        while(k--){
            int sum=0;
            for(int i=0;i<ans.size();i++) sum+=ans[i]-'0';
            ans=to_string(sum);
        }
        return stoi(ans);  
    }
};