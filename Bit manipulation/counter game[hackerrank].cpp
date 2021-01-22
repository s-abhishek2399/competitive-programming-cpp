#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int setCHECK(unsigned long long int n )
{
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
 } 
int main()
{
    int x;
    cin>>x;
    while(x--){
        unsigned long long int n ;
        cin>>n;
        if (setCHECK(n-1) & 1) 
             cout<<"Louise"<<endl;
        else 
             cout<<"Richard"<<endl; 
    }
    return 0;
    
}
