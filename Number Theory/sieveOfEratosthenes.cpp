// when query<= a million
// input =N
// where N< 100000000 this algorithm comes in handy 
// output prime or not


int PRIME[10000001];

void sieveALGO()
{
    int N=10000000;
    for(int i=1;i<=N;i++){
        PRIME[i]=1;
    }
    PRIME[0]=PRIME[1]=0;  /// since 0 and 1 cannot be prime number
    for(int i=2;i*i<N;i++){
        if(PRIME[i]){
            for(int j=i*i;j<=N;j++){
                PRIME[j]=0;
            }
        }
    }
}