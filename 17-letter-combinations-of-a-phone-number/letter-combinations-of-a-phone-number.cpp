class Solution {
public:
    void func(string &s,string &ans,vector<string> &finalAns,int index,string mapping[]){
        if(index==s.size()){
            finalAns.push_back(ans);
            return;
        }
        int value=s[index]-'0';
        string newStr=mapping[value];
        for(int i=0;i<newStr.size();i++){
            ans.push_back(newStr[i]);
            func(s,ans,finalAns,index+1,mapping);
            ans.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> finalAns;
        string ans="";
        string mapping[10]{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.size()==0) return finalAns;
        func(digits,ans,finalAns,0,mapping);
        return finalAns;
    }
};