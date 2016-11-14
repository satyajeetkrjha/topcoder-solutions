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
#include <cassert>
#include <bits/stdc++.h>
using namespace std;
const int MOD=1000000007;
typedef long long ll;
class NoRepeatPlaylist {
public:
	int numPlaylists(int, int, int);
};
int n,m,p;
int dp[105][105][105];
//total is size of current play list
// xs is size of playlist with songs that has been played
// ys size of playlist with songs that has  not been played
ll countplaylist(int total,int xs,int ys){
    if(total==p)// PLAYLIST FORMED
    {
        if(ys==0)
            return 1;
        else
            return 0;

    }
    if(dp[total][xs][ys]!=-1)// we have calculated already
        return dp[total][xs][ys];
    ll result=0;
    // select songs from y playlist
    if(ys>0)
        result+=countplaylist(total+1,xs+1,ys-1)*ys;// ys decreases by 1 while xs increases and
    if(xs-m>0)
      result+=countplaylist(total+1,xs,ys)*(xs-m);
      dp[total][xs][ys]=(result%MOD);
      return dp[total][xs][ys];

}
int NoRepeatPlaylist::numPlaylists(int N, int M, int P) {
	n=N;m=M;p=P;

	memset(dp,-1,sizeof(dp));
	ll ans=countplaylist(0,0,n);
	return ans;
}
//%:start-tests%>
double test0() {
	int p0 = 1;
	int p1 = 0;
	int p2 = 3;
	NoRepeatPlaylist * obj = new NoRepeatPlaylist();
	clock_t start = clock();
	int my_answer = obj->numPlaylists(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 1;
	int p1 = 1;
	int p2 = 3;
	NoRepeatPlaylist * obj = new NoRepeatPlaylist();
	clock_t start = clock();
	int my_answer = obj->numPlaylists(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 2;
	int p1 = 0;
	int p2 = 3;
	NoRepeatPlaylist * obj = new NoRepeatPlaylist();
	clock_t start = clock();
	int my_answer = obj->numPlaylists(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 6;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 4;
	int p1 = 0;
	int p2 = 4;
	NoRepeatPlaylist * obj = new NoRepeatPlaylist();
	clock_t start = clock();
	int my_answer = obj->numPlaylists(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 24;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 2;
	int p1 = 1;
	int p2 = 4;
	NoRepeatPlaylist * obj = new NoRepeatPlaylist();
	clock_t start = clock();
	int my_answer = obj->numPlaylists(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int p0 = 50;
	int p1 = 5;
	int p2 = 100;
	NoRepeatPlaylist * obj = new NoRepeatPlaylist();
	clock_t start = clock();
	int my_answer = obj->numPlaylists(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 222288991;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
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
