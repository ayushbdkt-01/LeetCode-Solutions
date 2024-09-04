class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> freq;
        for(int i=0;i<edges.size();i++){
            freq[edges[i][0]]++;
            freq[edges[i][1]]++;
        }
        int maxFreq=INT_MIN;
        int ans=-1;
        for(auto it: freq){
            if(it.second>maxFreq){
                maxFreq=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};