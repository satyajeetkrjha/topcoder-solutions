#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class Sunnygraphs2 {
public:
	long long count(vector <int>);
};

long long Sunnygraphs2::count(vector <int> a) {
int n=a.size();// total vertexes
vector <bool> visited(n);
vector <int> cycles;
for(int i=0;i<n;i++)
{
    if(visited[i]==false){
        int y=a[i];// i is connected to y
        bool cycledetected=false;
        for(int j=0;j<n;j++){
            if(y==i)
            {
                cycledetected=true;
            }
            y=a[y];
        }
    if(cycledetected==true){
        visited[i]=true;
        int y=a[i];
         int c = 1;
                while (y != i) {
                    c++;
                    visited[y] = true;
                    y = a[y];
                }
                cycles.push_back(c);
            }
        }
    }
    int val=n-accumulate(cycles.begin(),cycles.end(),0);//accumulate is simply 0+cycles(0)+cycles(1)+..
    long long res1=(1LL<<val);
    for(int i=0;i<cycles.size();i++){
        res1*=((1LL<<cycles[i])-1);
    }
    if(cycles.size()==1)
        res1+=1;

    return res1;
}





