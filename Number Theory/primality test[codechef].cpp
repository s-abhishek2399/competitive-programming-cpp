// time complexity of o(sqrt(n))!!!!

#include <iostream>
using namespace std;

bool checkPRIM(int n)
{
    if(n==1){
        return false;
        
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0){
            return false;
            
        }
    }
    return true;

}

int main() {
	int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        if(checkPRIM(n))
        cout<<"yes"<<endl;
        else
        {
            cout<<"no"<<endl;
        }
        

    }



	return 0;
	
	
}
