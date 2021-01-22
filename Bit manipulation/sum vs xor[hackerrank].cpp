#include <bits/stdc++.h>

using namespace std;


int findmsbfirst1(long long int n)
{
    long long int f=1;
    for(int i=55;i>=0;i--)
    {
        if((n &(f<<i)))
         {
            return i;
         }
    }
    return 0;
    
}

int main()
{
    long long int n;
    long long int res=1;
    cin>>n;
    int msb=findmsbfirst1(n);
    int count=0;
    for(int i=0;i<msb;i++)
    {
        long long int f =1;
        if((n & (f<<i))==0){
            count++;
        }
    
    }
    long long int f=1;
    cout<<(f<<count);
}

