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

class ProblemSets {
public:
	long long maxSets(long long, long long, long long, long long, long long);
};
bool possible(long long E, long long EM, long long M, long long MH, long long H,ll x){
	if(E+EM<x || H+MH<x){
		return false;
	}
	ll maxa=min(EM,E+EM-x);
    ll maxb=min(MH,H+MH-x);
    if(M+maxa+maxb>=x){
    	return true;
	}
  else{
		return false;
	}
}
long long ProblemSets::maxSets(long long E, long long EM, long long M, long long MH, long long H) {
	ll lo=0;
	ll high=M+MH+1;

	ll ans=0;
	while(lo<=high){
		ll mid=(lo+high)/2;
		if(possible(E,EM,M,MH,H,mid)){
			
			ans=mid;
			//cout<<" ans is "<<lo<<endl;
			lo=mid+1;
		
		}
		else
		high=mid-1;
	}
	return ans;

}

//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
//<%:start-tests%>
double test0() {
	long long p0 = 2LL;
	long long p1 = 2LL;
	long long p2 = 1LL;
	long long p3 = 2LL;
	long long p4 = 2LL;
	ProblemSets * obj = new ProblemSets();
	clock_t start = clock();
	long long my_answer = obj->maxSets(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = 3LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	long long p0 = 100LL;
	long long p1 = 100LL;
	long long p2 = 100LL;
	long long p3 = 0LL;
	long long p4 = 0LL;
	ProblemSets * obj = new ProblemSets();
	clock_t start = clock();
	long long my_answer = obj->maxSets(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = 0LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	long long p0 = 657LL;
	long long p1 = 657LL;
	long long p2 = 657LL;
	long long p3 = 657LL;
	long long p4 = 657LL;
	ProblemSets * obj = new ProblemSets();
	clock_t start = clock();
	long long my_answer = obj->maxSets(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = 1095LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	long long p0 = 1LL;
	long long p1 = 2LL;
	long long p2 = 3LL;
	long long p3 = 4LL;
	long long p4 = 5LL;
	ProblemSets * obj = new ProblemSets();
	clock_t start = clock();
	long long my_answer = obj->maxSets(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = 3LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	long long p0 = 1000000000000000000LL;
	long long p1 = 1000000000000000000LL;
	long long p2 = 1000000000000000000LL;
	long long p3 = 1000000000000000000LL;
	long long p4 = 1000000000000000000LL;
	ProblemSets * obj = new ProblemSets();
	clock_t start = clock();
	long long my_answer = obj->maxSets(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = 1666666666666666666LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
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

