class Solution {
public:
    bool checkConsequetive(vector<int> nums,int left, int right){
        for(int i=left;i<=right-1;i++){
            if(nums[i]+1==nums[i+1]) continue;
            else return false;
        }
        return true;
    }


    vector<int> resultsArray(vector<int>& nums, int k) {
        int left=0, right=k-1;
        vector<int> ans;
        while(right<nums.size()){
            if(checkConsequetive(nums,left,right)==true) 
                ans.push_back(*max_element(nums.begin()+left, nums.begin()+right+1));
            else ans.push_back(-1);
            left++;
            right++;
        }
        return ans;
    }
};