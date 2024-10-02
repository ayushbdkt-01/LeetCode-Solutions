class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> s(arr.begin(),arr.end());
        unordered_map<int,int> mapp;
        int rank=1;
        for(auto it: s){
            mapp[it]=rank;
            rank++;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=mapp[arr[i]];
        }
        return arr;
    }
};