#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class HexagonalBoard{
public:
      int minColors(vector <string>);
};
int result=0;
int n;
//bool marked[50][50];
vector <string> s;
int color[55][55];
void dfsbaptrite(int x,int y,int c){
    if(s[x][y]=='X'){
            result=max(1,result);// non empty case
        if(color[x][y]==-1){// if uncolored
        color[x][y]=c;// color it now
        // look at its neighbor now and work on them
        for(int nx=max(0,x-1);nx<=min(n-1,x+1);nx++){
            for(int ny=max(0,y-1);ny<=min(n-1,y+1);ny++){
                if((nx-x!=ny-y )&& (s[nx][ny]=='X')){
                    dfsbaptrite(nx,ny,!c);// !c changes the color of c
                result=max(2,result);
            if(color[nx][ny]==c)
                result=3;
        }
    }
}
        }
    }
}

int HexagonalBoard::minColors(vector <string> board){
s=board;
 n=s.size();
memset(color,-1,sizeof(color));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        dfsbaptrite(i,j,0);
    }
}
return result;
}
