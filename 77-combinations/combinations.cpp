class Solution {
public:

    void func(vector<int> &arr,vector<int> &ans,vector<vector<int>> &finalAns,int index,int k){
        if(index>=arr.size()){
            if(ans.size()==k) finalAns.push_back(ans);
            return;
        }
        ans.push_back(arr[index]);
        func(arr,ans,finalAns,index+1,k);
        ans.pop_back();

        func(arr,ans,finalAns,index+1,k);
    }


    vector<vector<int>> combine(int n, int k) {
        vector<int> arr(n);
        for(int i=0;i<n;i++) arr[i]=i+1;
        vector<int> ans;
        vector<vector<int>> finalAns;
        func(arr,ans,finalAns,0,k);
        return finalAns;
    }
};