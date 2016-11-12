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

class UnsealTheSafe {
public:
	long long countPasswords(int);
};
ll dp[35][12];//
long long UnsealTheSafe::countPasswords(int N) {
	// number of password of length 1 with ending digits 0,1,2,3,....,9 is 1 so this is base case
	for(int i=0;i<=9;i++)
        dp[1][i]=1;

    for(int i=2;i<=N;i++){
        dp[i][0]=dp[i-1][7];
        dp[i][1]=dp[i-1][2]+dp[i-1][4];
        dp[i][2]=dp[i-1][1]+dp[i-1][5]+dp[i-1][3];
        dp[i][3]=dp[i-1][2]+dp[i-1][6];
        dp[i][4]=dp[i-1][1]+dp[i-1][5]+dp[i-1][7];
        dp[i][5]=dp[i-1][4]+dp[i-1][2]+dp[i-1][6]+dp[i-1][8];
        dp[i][6]=dp[i-1][5]+dp[i-1][9]+dp[i-1][3];
        dp[i][7]=dp[i-1][4]+dp[i-1][8]+dp[i-1][0];
        dp[i][8]=dp[i-1][7]+dp[i-1][5]+dp[i-1][9];
        dp[i][9]=dp[i-1][8]+dp[i-1][6];

    }
    ll sum=0;
    for(int i=0;i<=9;i++)
        sum+=dp[N][i];
    return sum;


}
double test0() {
	int p0 = 2;
	UnsealTheSafe * obj = new UnsealTheSafe();
	clock_t start = clock();
	long long my_answer = obj->countPasswords(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 26LL;
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
	int p0 = 3;
	UnsealTheSafe * obj = new UnsealTheSafe();
	clock_t start = clock();
	long long my_answer = obj->countPasswords(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 74LL;
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
	int p0 = 25;
	UnsealTheSafe * obj = new UnsealTheSafe();
	clock_t start = clock();
	long long my_answer = obj->countPasswords(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 768478331222LL;
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

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}


