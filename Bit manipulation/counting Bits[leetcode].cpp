class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> output;
        
        
        
        for(int i=0;i<=num;i++){
            int count=0;
            int n=i;
            while(n>0){
                count+=1;
                n=(n &(n-1));
            }
            output.push_back(count);
        }
        
        return output;
    }
};
