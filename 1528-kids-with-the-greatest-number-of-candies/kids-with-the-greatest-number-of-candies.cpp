class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx=*max_element(candies.begin(),candies.end());
        vector<bool> ans(candies.size());
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxx) ans[i]=true;
            else ans[i]=false;
        }
        return ans;
    }
};