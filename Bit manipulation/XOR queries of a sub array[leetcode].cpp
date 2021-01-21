class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        int n=arr.size();
        int prefix[n];
        prefix[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]= prefix[i-1] ^ arr[i];
        }
        
        vector <int> output;
        for(int i=0;i<queries.size();i++)
        {
            int L=queries[i][0];
            int R=queries[i][1];
            if (L==0)
            {
                output.push_back(prefix[R]);
            }
            else
            {
               
                output.push_back((prefix[R] ^ prefix[L-1]));
            }
        }
        return output;
    }
};
