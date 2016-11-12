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
typedef long long ll;
class SplitIntoPairs {
public:
	int makepairs(vector <int>, int);
};

int SplitIntoPairs::makepairs(vector <int> A, int X) {
	vector<int> positive;
	vector <int> negative;
	for(int i=0;i<A.size();i++){
        if(A[i]<0)
            negative.push_back(A[i]);
        else
            positive.push_back(A[i]);
	}
	if(negative.size()%2==0)
        return (A.size()/2);
    ll minpositive=*min_element(positive.begin(),positive.end());
    ll maxnegative=*max_element(negative.begin(),negative.end());
    if(minpositive*maxnegative>=X)
        return (A.size())/2;
    else
        return (A.size())/2 -1;
}
double test0() {
	int t0[] = {2,-1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = -1;
	SplitIntoPairs * obj = new SplitIntoPairs();
	clock_t start = clock();
	int my_answer = obj->makepairs(p0, p1);
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
double test1() {
	int t0[] = {1,-1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = -1;
	SplitIntoPairs * obj = new SplitIntoPairs();
	clock_t start = clock();
	int my_answer = obj->makepairs(p0, p1);
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
double test2() {
	int t0[] = {-5,-4,2,3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = -1;
	SplitIntoPairs * obj = new SplitIntoPairs();
	clock_t start = clock();
	int my_answer = obj->makepairs(p0, p1);
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
double test3() {
	int t0[] = {5,-7,8,-2,-5,3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = -7;
	SplitIntoPairs * obj = new SplitIntoPairs();
	clock_t start = clock();
	int my_answer = obj->makepairs(p0, p1);
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
	int t0[] = {3,4,5,6,6,-6,-4,-10,-1,-9};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = -2;
	SplitIntoPairs * obj = new SplitIntoPairs();
	clock_t start = clock();
	int my_answer = obj->makepairs(p0, p1);
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
double test5() {
	int t0[] = {1000000,1000000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = -5;
	SplitIntoPairs * obj = new SplitIntoPairs();
	clock_t start = clock();
	int my_answer = obj->makepairs(p0, p1);
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
