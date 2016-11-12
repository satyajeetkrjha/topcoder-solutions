#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll smallestfun(int n){
    int no=n;
    int val=n;
    bool digit[10];
    memset(digit,false,sizeof digit);
    while(no>0){
        int r=no%10;
        digit[r]=true;
        no=no/10;
    }
    int t=1;
for(int i=1;;i++){
 t=1;

 for(int j=1;j<i;j++){
    t=t*10;//1 10 100 1000
    cout<<" t is "<<t<<endl;
 }
 for(int k=0;k<t;k++){
 int x=val*t+k;
 for(int i=1;i<=9;i++){
    if(digit[i]==true && (x%i)!=0)
        goto skip;
 }
return x;
skip:;
}
}
}
int main()
{
  int n;
  cin>>n;
  cout<<smallestfun(n)<<endl;
    return 0;
}
