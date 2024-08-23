class Solution {
public:
    void func(vector<int> &nums,int index,vector<int>& ans,set<vector<int>> &finalAns){
        if(index>=nums.size()){
            finalAns.insert(ans);
            return;
        }
        ans.push_back(nums[index]);
        func(nums,index+1,ans,finalAns);
        ans.pop_back();
        func(nums,index+1,ans,finalAns);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        set<vector<int>> finalAns;
        func(nums,0,ans,finalAns);
        vector<vector<int>> finalAnswer(finalAns.begin(),finalAns.end());
        return finalAnswer;
    }
};