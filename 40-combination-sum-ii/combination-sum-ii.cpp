class Solution {
public:
    void func(vector<int>&candidates, vector<int>&ans, vector<vector<int>>&finalAns, int index, int target){
        if(target==0){
            finalAns.push_back(ans);
            return;
        } 
        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            ans.push_back(candidates[i]);
            func(candidates,ans,finalAns,i+1,target-candidates[i]);
            ans.pop_back();
        }
    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> ans;
        vector<vector<int>> finalAns;
        func(candidates,ans,finalAns,0,target);
        return finalAns;
    }
};