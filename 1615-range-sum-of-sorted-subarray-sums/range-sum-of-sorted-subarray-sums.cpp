class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> ans;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                ans.push_back(sum);
            }
        }
        sort(ans.begin(),ans.end());
        long long finalSum=0;
        for(int i=left-1;i<=right-1;i++){
            finalSum+=ans[i];
        }
        int mod=1e9+7;
        return finalSum%mod;
    }
};