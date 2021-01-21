class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n>0){
           cnt+=1;
           n=n&(n-1);     
           }
        return cnt;
       
    }

};
