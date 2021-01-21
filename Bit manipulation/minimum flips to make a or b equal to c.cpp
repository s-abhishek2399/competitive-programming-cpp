class Solution {
public:
    int minFlips(int a, int b, int c) {
        int output = 0;
        for(int i=0;i<32;i++)
        {
            bool m=false , n=false ,o=false;
            
            if(a &(1<<i))
                m=true;
            if(b & (1<<i))
                n=true;
            if(c &(1<<i))
                o=true;
            
            
            if(o==false)
            {
                if(m == true && n == true)
                {
                    output=output+2;
                }
                else
                    
                    if(m == true || n == true)
                    {
                        output++;
                    }
            }
            
           else
            {
                if(m == false && n == false)
                {
                    output++;
                }
            }
        }
       return output; 
    }
};
