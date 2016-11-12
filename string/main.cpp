#include <bits/stdc++.h>
using namespace std;
vector <int> forset;
int p[100006];
int a[100006];
//int forset[100005];
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<=n;i++){
       cin>>a[i];
        forset.push_back(i);
        p[i]=((i+a[i])%n)+1;
    }

    // generate all subsets of n
    for(int i=0;i<(1<<n);i++){
            int sum1=0;
            int sum2=0;
            int val=0;
         for(int j = 0;j < n;++j){
             if(i & (1 << j)){
                    int x=forset[j];
                // cout<<x <<" " ;                 // if jth bit is set in i
              sum1+=x;
              sum2+=p[x];
              val++;
         }
    }
   // cout<<endl;
   // cout<<"sum1 = "<<sum1<< " "<<"sum2 ="<<sum2<<endl;
    if(sum1==sum2 && sum1!=0){
        c=c+val;
        cout<<" equal sum "<<sum1<< " "<<"and val is "<<val<<endl;
    }
    }
cout<<c<<endl;
}
}
