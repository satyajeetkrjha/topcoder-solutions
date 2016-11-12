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

class CoinReversing {
public:
	double expectedHeads(int, vector <int>);
};

double CoinReversing::expectedHeads(int N, vector <int> a) {
	double q=1.0;// for t=0 steps
	//in total there are k steps say from t=1 to t=k and in first step we choose a[0] or a[t-1] coins for t=1 
	for(int t=1;t<=a.size();t++){// for t=1 ,prob p is a[t-1]/N that the coin is picked
		double p=(double)a[t-1]/(double)N;
		q=p*(1-q)+(1-p)*q;// calculate and update for  q 
	}
	return N*q;
	
}

//<%:start-tests%>
double test0() {
	int p0 = 3;
	int t1[] = {2,2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	CoinReversing * obj = new CoinReversing();
	clock_t start = clock();
	double my_answer = obj->expectedHeads(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p2 = 1.6666666666666667;
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
	int p0 = 10;
	int t1[] = {10,10,10};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	CoinReversing * obj = new CoinReversing();
	clock_t start = clock();
	double my_answer = obj->expectedHeads(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p2 = 0.0;
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
	int p0 = 10;
	int t1[] = {2,7,1,8,2,8};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	CoinReversing * obj = new CoinReversing();
	clock_t start = clock();
	double my_answer = obj->expectedHeads(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p2 = 4.792639999999999;
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
	int p0 = 1000;
	int t1[] = {916,153,357,729,183,848,61,672,295,936};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	CoinReversing * obj = new CoinReversing();
	clock_t start = clock();
	double my_answer = obj->expectedHeads(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p2 = 498.1980774932278;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

