#include <bits/stdc++.h>
using namespace std;
#define LL long long int
LL MOD = 1000000007;
LL factorial[2000005];
LL pow(LL a, LL b, LL mod) {
    LL x = 1, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>mod) x%=mod;
        }
        y = (y*y);
        if(y>mod) y%=mod;
        b /= 2;
    }
    return x;
}
LL modInverse(LL a, LL m){
    return pow(a,m-2,m);
}
void calFact()
{
    factorial[0]=1;
    factorial[1]=1;
    LL i;
    for (i=2;i<=2000001;i++)
        factorial[i]=(factorial[i-1]*i)%(MOD);
}
int main()
{
    calFact();
     int N,K;
        // N>=K
        cin>>N>>K;

        // Answer = (N-1)C(K-1)
        LL ans = factorial[N+K];
        ans = (ans*modInverse(factorial[K+1],MOD))%MOD;
        ans = (ans*modInverse(factorial[N-1],MOD))%MOD;
        cout<<ans<<endl;

    return 0;
}
