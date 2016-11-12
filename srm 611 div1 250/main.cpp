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

class LCMSet {
public:
	string equal(vector <int>, vector <int>);
};
bool possible(vector<int> a,int x){// a function to check if x can be the lcm of numbers in the vector
//int lcm(int a, int b) { return (a * (b / gcd(a, b))); } // divide before multiply!
int lcm=1;
for(int i=0;i<a.size();i++){
    if(x%a[i]==0){
        lcm=(lcm/__gcd(lcm,a[i]))*a[i];
    }
}
if(lcm==x)
    return true;
else
    return false;

}
vector <int> compressedset(vector <int> a){
    sort(a.begin(),a.end());
    vector<int> nonredundant(1,a[0]);
for(int i=0;i<a.size();i++){
    int x=a[i];
    if(possible( nonredundant,x)==false)
        nonredundant.push_back(x);
}
return nonredundant;
}
string LCMSet::equal(vector <int> A, vector <int> B) {
	vector <int> x=compressedset( A);
	for(int i=0;i<x.size();i++)
        cout<<x[i]<<" ";
    cout<<endl;
	vector <int> y=compressedset(B);
	for(int i=0;i<y.size();i++)
        cout<<y[i]<<" ";
    cout<<endl;
	if(x==y)
        return "Equal";
    else
        return "Not equal";
}
double test0() {
	int t0[] = {2,3,4,12};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,3,4,6};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LCMSet * obj = new LCMSet();
	clock_t start = clock();
	string my_answer = obj->equal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Equal";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
/*
double test1() {
	int t0[] = {4,9};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {6,36};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LCMSet * obj = new LCMSet();
	clock_t start = clock();
	string my_answer = obj->equal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Not equal";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int t0[] = {2,3,5,7,14,105};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,3,5,6,7,30,35};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LCMSet * obj = new LCMSet();
	clock_t start = clock();
	string my_answer = obj->equal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Equal";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int t0[] = {2,3,5,7,14,105};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,3,5,6,7,30,36};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LCMSet * obj = new LCMSet();
	clock_t start = clock();
	string my_answer = obj->equal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Not equal";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int t0[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LCMSet * obj = new LCMSet();
	clock_t start = clock();
	string my_answer = obj->equal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Equal";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int t0[] = {999999999,1953125,512,1000000000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {999999999,1953125,512};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LCMSet * obj = new LCMSet();
	clock_t start = clock();
	string my_answer = obj->equal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Equal";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test6() {
	int t0[] = {999999998,999999999,1000000000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {999999999,1000000000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LCMSet * obj = new LCMSet();
	clock_t start = clock();
	string my_answer = obj->equal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Not equal";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
*/
int main() {
	int time;
	bool errors = false;

	time = test0();
	if (time < 0)
		errors = true;

	/*time = test1();
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

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;*/
}

