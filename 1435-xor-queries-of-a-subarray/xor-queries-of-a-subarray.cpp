class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int left=queries[i][0];
            int right=queries[i][1];
            int xorr=0;
            for(int j=left;j<=right;j++) xorr=xorr^arr[j];
            ans.push_back(xorr);
        }
        return ans;
    }
};