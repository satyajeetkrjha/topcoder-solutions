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
const int mod =1000000007;
typedef long long ll;


class PermutationCountsDiv2 {
public:
	int countPermutations(int, vector <int>);
};

int PermutationCountsDiv2::countPermutations(int N, vector <int> pos) {
	// f(a,b) counts for [a,b) and we return [0,n)
    bool	shouldbelessthannext[N+1];
    memset(shouldbelessthannext,false,sizeof(	shouldbelessthannext));
     int n=N;
	int arr[n+1][n+1];
	for(int i=0;i<=n;i++)
	for(int j=0;j<=n;j++)
	arr[i][j]=0;
	ll f[n+1][n+1];
	for(int i=0;i<=n;i++){
		arr[i][0]=1;
		for(int j=1;j<=i;j++){
			arr[i][j]=(arr[i-1][j]+arr[i-1][j-1])%mod;
		}
}
	for(int i=0;i<pos.size();i++){
		int x=pos[i];
		shouldbelessthannext[x-1]=true;
	}
	for(int a=0;a<=n;a++){
		f[a][a]=1;
		if(a+1<=n){
		f[a][a+1]=1;
		
	}
}
	// t=b-a
	for(int t=2;t<=n;t++){
		for(int a=0;a+t<=n;a++){
			int b=a+t;
			f[a][b]=0;// we store result in this 
			for(int i=a;i<b;i++){
				if((shouldbelessthannext[i]==true || i==b-1) && (shouldbelessthannext[i-1]==false || i==a)){
					ll p=arr[t-1][i-a];
					ll q= f[a][i];
					ll r=f[i+1][b];
					f[a][b]+=(((r*q)%mod)*p)%mod;
				}
			}
			f[a][b]%=mod;
		}
	}
	return f[0][n];
	
}

//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
//<%:start-tests%>
double test0() {
	int p0 = 5;
	int t1[] = {3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PermutationCountsDiv2 * obj = new PermutationCountsDiv2();
	clock_t start = clock();
	int my_answer = obj->countPermutations(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 9;
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
	int p0 = 13;
	int t1[] = {12,11,10,9,8,7,6,5,4,3,2,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PermutationCountsDiv2 * obj = new PermutationCountsDiv2();
	clock_t start = clock();
	int my_answer = obj->countPermutations(p0, p1);
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
	int p0 = 13;
	vector <int> p1;
	PermutationCountsDiv2 * obj = new PermutationCountsDiv2();
	clock_t start = clock();
	int my_answer = obj->countPermutations(p0, p1);
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
double test3() {
	int p0 = 9;
	int t1[] = {2,4,5};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PermutationCountsDiv2 * obj = new PermutationCountsDiv2();
	clock_t start = clock();
	int my_answer = obj->countPermutations(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1421;
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
	int p0 = 80;
	int t1[] = {31,41,59,26,53,58,9,79,32,3,8,46};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PermutationCountsDiv2 * obj = new PermutationCountsDiv2();
	clock_t start = clock();
	int my_answer = obj->countPermutations(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 82650786;
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

