#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 int a[55];
int main(){
int n;
cin>>n;
int sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
    int cut=0;
    for(int i=0;i<n;i++){
        if (2*a[i]<sum)
            continue;
        else
            cut++;
    }
cout<<cut<<endl;
return 0;
}
