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
const int MOD = 1000000007;

class WolfPackDivTwo {
public:
	int calc(vector <int>, vector <int>, int);
};
 const int fourx[4]={0,0,+1,-1};
 const int foury[4]={+1,-1,0,0};
 // we use memoization that we don't visit same dx dy again
 int memo[151][151][151];
 int waystoreach(int dx,int dy ,int m){
 int &res=memo[dx][dy][m];// &
 if(res==-1){// this one was not earlier done
        res=0;
    if (m==0){
        if((dx==0)&& (dy==0)){
                    res=1;// we are at target location
        }
    }
    else{
            // dx is distance between target and original x so if wolf moves right dx becomes dx+1 and if left dx decreases by 1
        for(int i=0;i<4;i++){
            int x1=abs(dx-fourx[i]);// dx increases or decrease
            int y1=abs(dy-foury[i]);
            if(x1+y1<=m-1){// we move any of direction so m decreases and we just need to check upto m-1
              res=(res+waystoreach(x1,y1,m-1))%MOD  ;
            }
        }
    }
 }

 return res;
 }

int WolfPackDivTwo::calc(vector <int> x, vector <int> y, int m) {
    int res=0;
    memset(memo,-1,sizeof(memo));// all set to -1
	vector <int> x1=x;
	sort(x1.begin(),x1.end());// x1[0]-m and x1[x1.length()-1]+m are min and max values of tx and we do same for ty also
	vector <int> y1=y;
	sort(y1.begin(),y1.end());
	// we iterate over all possible tx and ty say target values
	 for(int tx=x1[0]-m;tx<=x1[x1.size()-1]+m;tx++){
       for(int ty=y1[0]-m;ty<=y1[y1.size()-1]+m;ty++){
            long long p=1LL;
            for(int i=0;i<x.size();i++){
                int dx=abs(tx-x[i]);// dx and dy is difference between target x,original x and target y and original y
                int dy=abs(ty-y[i]);
                if(dx+dy<=m){
                    p=(p*waystoreach(dx,dy,m))%MOD;
                }
                else{
                    p=0;
                }
            }
            res=(res+(int)p)%MOD;
        }
	}
	return res;
}
double test0() {
	int t0[] = {3,5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 1;
	WolfPackDivTwo * obj = new WolfPackDivTwo();
	clock_t start = clock();
	int my_answer = obj->calc(p0, p1, p2);
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
	int t0[] = {0,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 1;
	WolfPackDivTwo * obj = new WolfPackDivTwo();
	clock_t start = clock();
	int my_answer = obj->calc(p0, p1, p2);
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
	int t0[] = {0,2,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,0,0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 2;
	WolfPackDivTwo * obj = new WolfPackDivTwo();
	clock_t start = clock();
	int my_answer = obj->calc(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 4;
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
	int t0[] = {7,8};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {8,7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 1;
	WolfPackDivTwo * obj = new WolfPackDivTwo();
	clock_t start = clock();
	int my_answer = obj->calc(p0, p1, p2);
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
double test4() {
	int t0[] = {0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,4,4,4,4,4,4,4,4,4,4,6,6,6,6,6,6,6,6,6,6,8,8,8,8,8,8,8,8,8,8};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,2,4,6,8,10,12,14,16,18,0,2,4,6,8,10,12,14,16,18,0,2,4,6,8,10,12,14,16,18,0,2,4,6,8,10,12,14,16,18,0,2,4,6,8,10,12,14,16,18};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 12;
	WolfPackDivTwo * obj = new WolfPackDivTwo();
	clock_t start = clock();
	int my_answer = obj->calc(p0, p1, p2);
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
double test5() {
	int t0[] = {0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,4,4,4,4,4,4,4,4,4,4,6,6,6,6,6,6,6,6,6,6,8,8,8,8,8,8,8,8,8,8};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,2,4,6,8,10,12,14,16,18,0,2,4,6,8,10,12,14,16,18,0,2,4,6,8,10,12,14,16,18,0,2,4,6,8,10,12,14,16,18,0,2,4,6,8,10,12,14,16,18};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 31;
	WolfPackDivTwo * obj = new WolfPackDivTwo();
	clock_t start = clock();
	int my_answer = obj->calc(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 573748580;
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

