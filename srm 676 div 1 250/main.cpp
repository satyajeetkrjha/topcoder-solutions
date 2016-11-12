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

class WaterTank {
public:
	double minOutputRate(vector <int>, vector <int>, int);
};

double WaterTank::minOutputRate(vector <int> t, vector <int> x, int C) {
	// we use binary search method
	double lo=0.0;
	double high=50e13;// 50*10^6*10^6 is max that can be in water tank assuming r=0 so selected high to be greater than this
	for(int i=0;i<150;i++){//we do this much of iteration to reduce the difference  between the lo and high
        double R=(lo+high)/2.0;// mid is the rate
        double v=0;// v is the volume of water in tank and initially it is zero
        bool flag=true;// if the value of r is good enough for all t[i]'s and x[i]'s of input and there is no overflow ,it remains true else we change it to false
        for(int i=0;i<t.size();i++){
            // x[i] is the amount of water going in per second and R is the amount of water coming out
            double add=t[i]*(double)(x[i]-R);//this much water is in tank after t[i] second
            if(v+add>C){// overflow case
                flag=false;
            }
            v=max(v+add,0.0);// update volume in tank .if R is very large add may go negative so we set v=0 for this reason
        }
        if(flag==true){
       high =R;// R is not enough so we increase it
        }
        else{
            lo=R;
        }


	}


	return high;



}
double test0() {
	int t0[] = {3,3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1,2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 3;
	WaterTank * obj = new WaterTank();
	clock_t start = clock();
	double my_answer = obj->minOutputRate(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 0.9999999999999999;
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
	int t0[] = {1,2,3,4,5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5,4,3,2,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 10;
	WaterTank * obj = new WaterTank();
	clock_t start = clock();
	double my_answer = obj->minOutputRate(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 1.9999999999999996;
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
	int t0[] = {5949,3198,376,3592,4019,3481,5609,3840,6092,4059};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {29,38,96,84,10,2,39,27,76,94};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 1000000000;
	WaterTank * obj = new WaterTank();
	clock_t start = clock();
	double my_answer = obj->minOutputRate(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 0.0;
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
	int t0[] = {9,3,4,8,1,2,5,7,6};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {123,456,789,1011,1213,1415,1617,1819,2021};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 11;
	WaterTank * obj = new WaterTank();
	clock_t start = clock();
	double my_answer = obj->minOutputRate(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 2019.1666666666665;
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
	int t0[] = {100};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 12345;
	WaterTank * obj = new WaterTank();
	clock_t start = clock();
	double my_answer = obj->minOutputRate(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 876.55;
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

