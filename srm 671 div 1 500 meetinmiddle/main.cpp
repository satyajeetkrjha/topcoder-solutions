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
typedef long long ll;
class BearDarts {
public:
	long long count(vector <int>);
};

long long BearDarts::count(vector <int> w) {
	// meet in middle approach
	ll res=0;
	int n=w.size();
	map<pair<int,int>,int>ways;// count total number  of (k,r) pairs existing for every (d,c)
	for (int j=n-3;j>0;j--){
        int k=j+1;// n-2
        for(int r=j+2;r<n;r++){
                int g=__gcd(w[k],w[r]);// calculate gcd of c .d to reduce to irreducible fraction
        ways[{w[r]/g,w[k]/g}]++;// for a ratio d/c

        }
        // now we move from i=0 till j and we try to find the value of a/b and if ratio matches we add res+ways[ratio]
        for(int i=0;i<j;i++){
            int g=__gcd(w[j],w[i]);
           // pair <int,int> f={w[i]/g,w[j]/g};
           pair <int,int>f;
           f=make_pair(w[i]/g,w[j]/g);
            if(ways.count(f)==1)
                res+=ways[f];
        }
	}


	return res;

}
double test0() {
	int t0[] = {6,8,4,3,6};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	BearDarts * obj = new BearDarts();
	clock_t start = clock();
	long long my_answer = obj->count(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 2LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {3,4,12,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	BearDarts * obj = new BearDarts();
	clock_t start = clock();
	long long my_answer = obj->count(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 0LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {42,1000000,1000000,42,1000000,1000000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	BearDarts * obj = new BearDarts();
	clock_t start = clock();
	long long my_answer = obj->count(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 3LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {1,1,1,1,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	BearDarts * obj = new BearDarts();
	clock_t start = clock();
	long long my_answer = obj->count(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 5LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {1,2,3,4,5,6,5,4,3,2,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	BearDarts * obj = new BearDarts();
	clock_t start = clock();
	long long my_answer = obj->count(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 22LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int t0[] = {33554432, 33554432, 67108864, 134217728};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	BearDarts * obj = new BearDarts();
	clock_t start = clock();
	long long my_answer = obj->count(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 0LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
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


