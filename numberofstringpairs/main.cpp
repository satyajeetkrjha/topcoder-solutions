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
const int MOD=1000000007;

class PairsOfStrings {
public:
	int getNumber(int, int);
};
// STRING ROTATTION PROBLEM
vector <int> divisors(int n){// returns a vector consisting of divisors of n
vector<int> div;// holds divisors
for(int i=1;i*i<=n;i++){//http://www.geeksforgeeks.org/find-divisors-natural-number-set-1/
    if(n%i==0){
        if(n/i==i){
            div.push_back(i);
        }
        else{
            div.push_back(i);div.push_back(n/i);
        }
    }

}
sort(div.begin(),div.end());// sort them as we need sum of d' later on
return div;
}
//http://www.geeksforgeeks.org/write-an-iterative-olog-y-function-for-powx-y/
long power(long x,long y){
long res=1;
while(y>0){
    if(y%2!=0){
        res=(res*x)%MOD;

    }
    y=y/2;;
    x=(x*x)%MOD;

}
return res;
}
int PairsOfStrings::getNumber(int n, int k) {
	vector <int> d=divisors(n);// get all divisors in this vector
	int sz=d.size();
	long res=0;
     long foreachdivisor[sz+1];// number of strings for each divisor i
	for(int i=0;i<sz;i++){
        // for each divisor we find k^d and subtract d'
        long val=power(k,d[i]);
        // for all divisor d' of d  which is less than the d now ,sum
        for(int j=0;j<i;j++){

            if(d[i]%d[j]==0){// d[i]is d and d[j] is d'
                val=(val-foreachdivisor[j]+MOD)%MOD;
            }
        }
        foreachdivisor[i]=val;// we calculated the value for d[i]
        res+=(foreachdivisor[i]*d[i])%MOD;
	}

	return res%MOD;

}
//<%:start-tests%>
double test0() {
	int p0 = 2;
	int p1 = 2;
	PairsOfStrings * obj = new PairsOfStrings();
	clock_t start = clock();
	int my_answer = obj->getNumber(p0, p1);
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
double test1() {
	int p0 = 3;
	int p1 = 2;
	PairsOfStrings * obj = new PairsOfStrings();
	clock_t start = clock();
	int my_answer = obj->getNumber(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 20;
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
	int p0 = 3;
	int p1 = 4;
	PairsOfStrings * obj = new PairsOfStrings();
	clock_t start = clock();
	int my_answer = obj->getNumber(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 184;
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
	int p0 = 6;
	int p1 = 2;
	PairsOfStrings * obj = new PairsOfStrings();
	clock_t start = clock();
	int my_answer = obj->getNumber(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 348;
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
	int p0 = 100;
	int p1 = 26;
	PairsOfStrings * obj = new PairsOfStrings();
	clock_t start = clock();
	int my_answer = obj->getNumber(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 46519912;
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




