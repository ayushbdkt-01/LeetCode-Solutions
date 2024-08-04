class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0;
        int end=nums.size()-1;
        double minAvg=INT_MAX;
        while(start<end){
            double res=(nums[start]+nums[end])/2.0;
            minAvg=min(minAvg,res);
            start++,end--;
        }
        return minAvg;
    }
};