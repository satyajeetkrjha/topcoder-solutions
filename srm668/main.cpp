#include <bits/stdc++.h>
using namespace std;
int a[10000];
//int res=0; i call it no 1
int f(int n,int t,int k){
    int res=0;// i call it no 2
if( t==0 && k==1)
    res=1;
else if(n==0)
    res=0;
else{
        int pro=__gcd(a[n-1],k);
       // cout<<"pro"<<pro<<endl;
    res+=f(n-1,t-1,k/pro);
    res+=f(n-1,t,k);
    cout<<"res"<<res<<endl;

}
return res;

}
int main()
{
   int n,k;
   cin>>n>>k;
   for(int i=0;i<n;i++)
   cin>>a[i];
  // for(int i=n-1;i>0;i--)
    //cout<<a[i]<<" ";
  // cout<<endl;
   cout<<f(n,3,k);
    return 0;
}
