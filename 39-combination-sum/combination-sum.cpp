class Solution {
public:

    void func(vector<int>&candidates, vector<int>&ans, vector<vector<int>>&finalAns, int index, int target){
        if(index>=candidates.size()){
            if(target==0) finalAns.push_back(ans);
            return;
        }
        if(candidates[index]<=target){
            ans.push_back(candidates[index]);
            func(candidates,ans,finalAns,index,target-candidates[index]);
            ans.pop_back();
        }
        func(candidates,ans,finalAns,index+1,target);
    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> finalAns;
        func(candidates,ans,finalAns,0,target);
        return finalAns;
    }
};