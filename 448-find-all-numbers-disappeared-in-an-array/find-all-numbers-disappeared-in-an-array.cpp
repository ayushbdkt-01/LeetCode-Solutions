class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int> hash(n+1,0);
        for(auto it: nums) hash[it]++;
        for(int i=1;i<=n;i++) if(hash[i]==0) ans.push_back(i);
        return ans;
    }
};