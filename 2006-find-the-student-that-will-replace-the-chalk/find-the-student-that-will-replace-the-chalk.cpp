class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {

        long long sum=0;
        for(int i=0;i<chalk.size();i++) sum+=1LL*chalk[i];
        k=k%sum;
        int index=0;
        while(true){
            if(index==chalk.size()) index=0;
            if(k-chalk[index]<0) return index;
            k=k-chalk[index];
            index++;
        }
        return index;
    }
};