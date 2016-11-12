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

class FoxAndGCDLCM {
public:
	long long get(long long, long long);
};

long long FoxAndGCDLCM::get(long long G, long long L) {
    if(L%G!=0)
        return -1;
// A=a*G and B=b*G
ll ans=-1;
ll val=L/G;
// a and b both exists as divisors of L/G so simply get first divisor of L/G as i and use (L/G)/i=j to get second
for(ll i=1;i*i<=val;i++) {
        if(val%i==0){// we look for all pairs of (a,b) such that a divides L/G AND b divides L/G
        ll j=val/i;
        if(__gcd(i,j)==1){// (a and b) should be co-prime
            // FORM THE NUMBER
        //A+B=G(a+b)
        ll sum=G*(i+j);
        if(ans==-1)// this pair is first pair
            ans=sum;
        else
            ans=min(ans,sum);

        }
    }
}
return ans;
}
double test0() {
	long long p0 = 2LL;
	long long p1 = 20LL;
	FoxAndGCDLCM * obj = new FoxAndGCDLCM();
	clock_t start = clock();
	long long my_answer = obj->get(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 14LL;
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
	long long p0 = 5LL;
	long long p1 = 8LL;
	FoxAndGCDLCM * obj = new FoxAndGCDLCM();
	clock_t start = clock();
	long long my_answer = obj->get(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = -1LL;
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
	long long p0 = 1000LL;
	long long p1 = 100LL;
	FoxAndGCDLCM * obj = new FoxAndGCDLCM();
	clock_t start = clock();
	long long my_answer = obj->get(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = -1LL;
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
	long long p0 = 100LL;
	long long p1 = 1000LL;
	FoxAndGCDLCM * obj = new FoxAndGCDLCM();
	clock_t start = clock();
	long long my_answer = obj->get(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 700LL;
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
	long long p0 = 10LL;
	long long p1 = 950863963000LL;
	FoxAndGCDLCM * obj = new FoxAndGCDLCM();
	clock_t start = clock();
	long long my_answer = obj->get(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 6298430LL;
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

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}











//Powered by [KawigiEdit] 2.0!
