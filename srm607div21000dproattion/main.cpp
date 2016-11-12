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
#include <bits/stdc++.h>
using namespace std;

class CombinationLockDiv2 {
public:
	int minimumMoves(string, string);
};
const int infinite=100000000;
int n;
//int z;
int d[52];// n 50
string s;
string t;
int maxi=450;// n*9=50*9
int dp[55][455][3];
int f(int p,int x,int u){
    int &res=dp[p][x][u];
    if(res==-1){// not processed
        if(p==n){
            res=0;
        }
        else{
                res=infinite;//
        for(int opt=0;opt<=1;opt++)// 5>6>7>8>9>0>1 or the other way 5>4>3>2>1
            {
                for(int j=0;j<=maxi;j++){
                    if(opt==0){
                       if((d[p]+9*j)%10!=0)// basically decreasing digit here to zero
                        continue;

                    }
                    else{// opt==1
                        if((d[p]+j)%10!=0)
                            continue;
                    }
                    int z=0;
                    if(u==opt)//
                    {
                         z=max(j-x,0);
                    }
                    else{
                        z=j;
                    }
                    res=min(res,z+f(p+1,j,opt));
                    // once got correct y check the sequence,



                }
            }

        }
    }
    return res;


}
int CombinationLockDiv2::minimumMoves(string S, string T) {
s=S;
t=T;
n=S.size();
memset(d,0,sizeof(d));
// CALCULATE THE distance first
for(int i=0;i<S.size();i++){
    if(S[i]>=T[i]){
        d[i]=S[i]-T[i];
    }
    else{
        d[i]=(S[i]+10-T[i]);//
    }
}
memset(dp,-1,sizeof(dp));
int ans=f(0,0,0);
return ans;
// now take f(p,x,u) // x is open intervals till first p digits made zero and u is direction



}
//<%:start-tests%>
double test0() {
	string p0 = "123";
	string p1 = "112";
	CombinationLockDiv2 * obj = new CombinationLockDiv2();
	clock_t start = clock();
	int my_answer = obj->minimumMoves(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string p0 = "1";
	string p1 = "7";
	CombinationLockDiv2 * obj = new CombinationLockDiv2();
	clock_t start = clock();
	int my_answer = obj->minimumMoves(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string p0 = "607";
	string p1 = "607";
	CombinationLockDiv2 * obj = new CombinationLockDiv2();
	clock_t start = clock();
	int my_answer = obj->minimumMoves(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string p0 = "1234";
	string p1 = "4567";
	CombinationLockDiv2 * obj = new CombinationLockDiv2();
	clock_t start = clock();
	int my_answer = obj->minimumMoves(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string p0 = "020";
	string p1 = "909";
	CombinationLockDiv2 * obj = new CombinationLockDiv2();
	clock_t start = clock();
	int my_answer = obj->minimumMoves(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	string p0 = "4423232218340";
	string p1 = "6290421476245";
	CombinationLockDiv2 * obj = new CombinationLockDiv2();
	clock_t start = clock();
	int my_answer = obj->minimumMoves(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 18;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
//<%:end-tests%>
int main() {
	int time;
	bool errors = false;

	time = test0();
	if (time < 0)
		errors = true;

	time = test1();
	if (time < 0)
		errors = true;

	time = test2();
	if (time < 0)
		errors = true;

	time = test3();
	if (time < 0)
		errors = true;

	time = test4();
	if (time < 0)
		errors = true;

	time = test5();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}


//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
