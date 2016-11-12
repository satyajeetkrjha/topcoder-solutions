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
#include <iostream>

using namespace std;

class TheSquareRootDilemma {
public:
	int countPairs(int, int);
};

int TheSquareRootDilemma::countPairs(int N, int M) {
	// for each a from i=1 to N we calculate if there exists any b
	int sum=0;
	for(int a=1;a<=N;a++){
        int r;
      int product=1;
        for(int i=2;i*i<=a;i++){
            if(a%(i*i)==0) {// maximum i such that i*i divides a and to product of primes,we divide a/(maxi*maxi)
              product=i*i;// maximum product
        }
            }
            if(a==12)
            cout<<" maximum  product "<<product<<endl;

          r=a/product;
         // if(a==12)
          //cout<<" r is "<<r<<endl;

          // we find how many such b(here y) exists upto m for each a
        for(int y=1;y*y*r<=M;y++){
           sum++;
        }

	}
	return sum;
}
double test0() {
	int p0 = 2;
	int p1 = 2;
	TheSquareRootDilemma * obj = new TheSquareRootDilemma();
	clock_t start = clock();
	int my_answer = obj->countPairs(p0, p1);
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
double test1() {
	int p0 = 10;
	int p1 = 1;
	TheSquareRootDilemma * obj = new TheSquareRootDilemma();
	clock_t start = clock();
	int my_answer = obj->countPairs(p0, p1);
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
double test2() {
	int p0 = 12;
	int p1 = 12;
	TheSquareRootDilemma * obj = new TheSquareRootDilemma();
	clock_t start = clock();
	int my_answer = obj->countPairs(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 5;
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
	int p0 = 100;
	int p1 = 100;
	TheSquareRootDilemma * obj = new TheSquareRootDilemma();
	clock_t start = clock();
	int my_answer = obj->countPairs(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 310;
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

	/*time = test0();
	if (time < 0)
		errors = true;*/

	time = test1();
	if (time < 0)
		errors = true;

	/*time = test2();
	if (time < 0)
		errors = true;

	time = test3();
	if (time < 0)
		errors = true;*/

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
