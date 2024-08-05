class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> freq;
        for(auto s:arr) freq[s]++;
        int count=1;
        for(auto s:arr){
            if(freq[s]==1){
                if(count==k) return s;
                else count++;
            }
        }
        return "";
    }
};