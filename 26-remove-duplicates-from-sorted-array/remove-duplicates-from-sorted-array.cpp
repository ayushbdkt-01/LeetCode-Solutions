class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++) st.insert(nums[i]);
        vector<int>ans(st.begin(),st.end());
        nums=ans;
        sort(nums.begin(),nums.end());
        return st.size();
    }
};