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

class BallsSeparating {
public:
	int minOperations(vector <int>, vector <int>, vector <int>);
};

int BallsSeparating::minOperations(vector <int> red, vector <int> green, vector <int> blue) {
	int res=1000000000;
	int n=red.size();// n is number of boxes
	// we take r, b and g as probable indexes of red blue green boxes and we try every possible trio out of n boxes
	for(int r=0;r<n;r++){
        for(int b=0;b<n;b++){
            if(r!=b){// we make sure that same box cannot be red box as well as blue box
                for(int g=0;g<n;g++){
                    if(g!=b && g!=r){// index of green box can't be index of red or blue colored boxes
                        int moves=0;// calculate number of moves for every possibility
                        for(int i=0;i<n;i++){
                              int   costred=blue[i]+green[i];// if u try to make ith box red we move all blue and green out so total moves increases to costofred
                              int   costblue=red[i]+green[i];
                              int   costgreen=blue[i]+red[i];
                            if(i==r){
                          moves+=costred;
                            }
                            else if(i==g){
                            moves+=costgreen;
                            }
                            else if(i==b){
                                moves+=costblue;
                            }
                            else{
                                moves+=min(costred,min(costgreen,costblue));
                            }
                        }
                        res=min(res,moves);


                    }
                }
            }
        }
	}


	if(res!=1000000000)
        return res;
    else
        return -1;
}

double test0() {
	int t0[] = {1, 1, 1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 1, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1, 1, 1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	BallsSeparating * obj = new BallsSeparating();
	clock_t start = clock();
	int my_answer = obj->minOperations(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 6;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {6};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {8};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	BallsSeparating * obj = new BallsSeparating();
	clock_t start = clock();
	int my_answer = obj->minOperations(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {4, 6, 5, 7};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {7, 4, 6, 3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {6, 5, 3, 8};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	BallsSeparating * obj = new BallsSeparating();
	clock_t start = clock();
	int my_answer = obj->minOperations(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 37;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {7, 12, 9, 9, 7};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {7, 10, 8, 8, 9};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {8, 9, 5, 6, 13};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	BallsSeparating * obj = new BallsSeparating();
	clock_t start = clock();
	int my_answer = obj->minOperations(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 77;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {842398, 491273, 958925, 849859, 771363, 67803, 184892, 391907, 256150, 75799};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {268944, 342402, 894352, 228640, 903885, 908656, 414271, 292588, 852057, 889141};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {662939, 340220, 600081, 390298, 376707, 372199, 435097, 40266, 145590, 505103};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	BallsSeparating * obj = new BallsSeparating();
	clock_t start = clock();
	int my_answer = obj->minOperations(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 7230607;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
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

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
