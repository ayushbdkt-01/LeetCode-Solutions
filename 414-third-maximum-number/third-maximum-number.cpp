class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(auto it: nums) s.insert(it);
        vector<int>ans(s.begin(),s.end());
        if(ans.size()<3) return ans[ans.size()-1];
        return ans[ans.size()-3];
    }
};