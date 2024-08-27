class Solution {
public:

    void func(vector<int>& nums,int index,vector<int>&ans,vector<vector<int>>&finalAns){
        if(index==nums.size()){
            finalAns.push_back(ans);
            return;
        }
        ans.push_back(nums[index]);
        func(nums,index+1,ans,finalAns);
        ans.pop_back();
        func(nums,index+1,ans,finalAns);
    }


    int subsetXORSum(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalAns;
        int index=0;
        func(nums,index,ans,finalAns);
        int sum=0;
        for(int i=0;i<finalAns.size();i++){
            int xorr=0;
            for(int j=0;j<finalAns[i].size();j++) {
                xorr=xorr^finalAns[i][j];
            }
            sum+=xorr;
        }
        return sum;
    }
};