class Solution {
public:

    void func(vector<int> &arr,vector<int> &ans,vector<vector<int>> &finalAns,int index,int target,int k){
        if(ans.size()==k && target==0){
            finalAns.push_back(ans);
            return;
        }
        if(index>=arr.size() || target<0 || ans.size()>k) return;

        ans.push_back(arr[index]);
        func(arr,ans,finalAns,index+1,target-arr[index],k);
        ans.pop_back();
        func(arr,ans,finalAns,index+1,target,k);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr(9);
        for(int i=0;i<9;i++) arr[i]=i+1;
        vector<int> ans;
        vector<vector<int>> finalAns;
        func(arr,ans,finalAns,0,n,k);
        return finalAns;
        
    }
};