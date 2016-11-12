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

class FractionInDifferentBases {
public:
	long long getNumberOfGoodBases(long long, long long, long long, long long);
};
ll primepro(ll n){
set <ll> s;
s.clear();
while(n%2==0){
    s.insert(2);
    n=n/2;
}
for(ll i=3;i*i<=n;i+=2){
  while(n%i==0) {
    s.insert(i);
    n=n/i;
  }
}
if(n>2)
    s.insert(n);
    // find product of prime factors
    ll pr=1;
for (std::set<ll>::iterator it=s.begin(); it!=s.end(); ++it){
    ll val=*it;
    pr=pr*val;
}

return pr;
}
long long FractionInDifferentBases::getNumberOfGoodBases(long long P, long long Q, long long A, long long B) {
	ll g=__gcd(P,Q);
	P=P/g;
	Q=Q/g;
	// find the product of prime factors of the number
	ll pr=primepro(Q);
	ll finite=B/pr-(A-1)/pr;
	return (B-A+1)-finite;

}
//<%:start-tests%>
double test0() {
	long long p0 = 1LL;
	long long p1 = 2LL;
	long long p2 = 10LL;
	long long p3 = 10LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 0LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	long long p0 = 1LL;
	long long p1 = 9LL;
	long long p2 = 9LL;
	long long p3 = 10LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 1LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	long long p0 = 5LL;
	long long p1 = 6LL;
	long long p2 = 2LL;
	long long p3 = 10LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 8LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	long long p0 = 2662LL;
	long long p1 = 540LL;
	long long p2 = 2LL;
	long long p3 = 662LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 639LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	long long p0 = 650720LL;
	long long p1 = 7032600LL;
	long long p2 = 2012LL;
	long long p3 = 2012540LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 2010495LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	long long p0 = 1LL;
	long long p1 = 2LL;
	long long p2 = 10LL;
	long long p3 = 10LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 0LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test6() {
	long long p0 = 1LL;
	long long p1 = 9LL;
	long long p2 = 9LL;
	long long p3 = 10LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 1LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test7() {
	long long p0 = 5LL;
	long long p1 = 6LL;
	long long p2 = 2LL;
	long long p3 = 10LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 8LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test8() {
	long long p0 = 2662LL;
	long long p1 = 540LL;
	long long p2 = 2LL;
	long long p3 = 662LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 639LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test9() {
	long long p0 = 650720LL;
	long long p1 = 7032600LL;
	long long p2 = 2012LL;
	long long p3 = 2012540LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 2010495LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
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

	time = test6();
	if (time < 0)
		errors = true;

	time = test7();
	if (time < 0)
		errors = true;

	time = test8();
	if (time < 0)
		errors = true;

	time = test9();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
