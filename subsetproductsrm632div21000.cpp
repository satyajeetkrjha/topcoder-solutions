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
class GoodSubset {
public:
	int numberOfSubsets(int, vector <int>);
};
// f(x,t) is number of subsets of first t elements of input such that product of elements of those subset is x
// f(x,t)=f(x/d[t-1],t-1)+f(x,t-1) but d[t-1] must divide x
vector<int> v;
const int MOD = 1000000007;
 map<int,int> dp[101];
 
int f(int x, int t)
{
    if (dp[t].count(x) == 0) {
        int res = 0;
        if (t == 0) {
            if (x == 1) {
                res = 1;
            } else {
                res = 0;
            }
        } else {
            // include
            if (x % v[t-1] == 0) {
                res += f(x / v[t-1], t - 1); 
            }
            // don't include
            res += f(x, t - 1);
        }
        dp[t][x] = res % MOD;
    }
    return dp[t][x];
}
 
 
int GoodSubset::numberOfSubsets(int goodValue, vector <int> d) 
{
    v = d;
    return f(goodValue, d.size() ) - ( (goodValue == 1)? 1 : 0 );
}

double test0() {
	int p0 = 10;
	int t1[] = {2,3,4,5};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodSubset * obj = new GoodSubset();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsets(p0, p1);
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
	int p0 = 6;
	int t1[] = {2,3,4,5,6};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodSubset * obj = new GoodSubset();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsets(p0, p1);
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
double test2() {
	int p0 = 1;
	int t1[] = {1,1,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodSubset * obj = new GoodSubset();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsets(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 7;
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
	int p0 = 12;
	int t1[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodSubset * obj = new GoodSubset();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsets(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 6;
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
	int p0 = 5;
	int t1[] = {1,2,3,4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodSubset * obj = new GoodSubset();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsets(p0, p1);
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

