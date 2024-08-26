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

    void func(int index,string s,vector<string>&ans,vector<vector<string>> &finalAns){
        if(index==s.size()){
            finalAns.push_back(ans);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(checkPal(s,index,i)==true){
                ans.push_back(s.substr(index,i-index+1));
                func(i+1,s,ans,finalAns);
                ans.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> ans;
        vector<vector<string>> finalAns;
        func(0,s,ans,finalAns);
        return finalAns;
    }
};