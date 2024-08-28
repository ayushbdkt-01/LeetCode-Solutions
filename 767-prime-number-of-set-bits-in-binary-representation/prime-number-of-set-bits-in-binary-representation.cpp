class Solution {
public:
    int countSetBits(int n){
        int count=0;
        while(n!=0){
            if(n%2==1) count++;
            n=n/2;
        }
        return count;
    }

    bool checkPrime(int n){
        if(n<2) return false;
        for(int i=2;i<n;i++){
            if(n%i==0) return false;
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int answer=0;
        for(int i=left;i<=right;i++){
            int count=countSetBits(i);
            if(checkPrime(count)==true) answer++;
        }
        return answer;
    }
};