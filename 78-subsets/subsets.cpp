class Solution {
private:
    void solve(vector<int>& nums,int index,vector<vector<int>>& finalAns,vector<int>ans){
        if(index>=nums.size()){
            finalAns.push_back(ans);
            return;
        }

        solve(nums,index+1,finalAns,ans);

        int element=nums[index];
        ans.push_back(element);
        solve(nums,index+1,finalAns,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>finalAns;
        vector<int>ans;
        int index=0;
        solve(nums,index,finalAns,ans);
        return finalAns;
    }
};