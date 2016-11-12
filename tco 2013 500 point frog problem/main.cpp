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

class TheFrog {
public:
	double getMinimum(int, vector <int>, vector <int>);
};
// the value of leap is called X here and then for each R[I],WE try to find all possible leaps lengths that takes frog to this R[i]
double TheFrog::getMinimum(int D, vector <int> L, vector <int> R) {
double val=D;
for(int i=0;i<R.size();i++){// we try each R[i] values and calculate the possible x values and we return the minimum OF ALL POSSIBLE X'S
//x=r[i]/t are leap and T can be from 1 to R[i] but not greater than R[i] as x becomes less than 1 but leap size has to be minimum 1
for(int t=R[i];t>=1;t--){
  bool flag=true;// initially we mark true for each R[i]/t but if for this leap size frog falls in pit we just ignore this leap size
  for(int j=0;j<R.size()&& flag==true;j++){
    // we check if the generated leap size is good or bad by checking k1<=k2
    int k1=(L[j]*t)/R[i]+1;// generating value of k1
    int k2= (R[j]*t + R[i] - 1) / R[i] - 1;// ceiling of (a/b)=(a+b-1)/b-1;
    if(k1<=k2)
        flag=false;
    else
        flag=true;
  }
  if(flag==true){// we consider leap size if with x frog  doesn't fall in pit
   double x=(double)(R[i])/(double)(t);
    val=min(val,x);
    break;// we are done with this R[i]
  }
}

}
return val;
}
double test0() {
	int p0 = 16;
	int t1[] = {2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {7};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	TheFrog * obj = new TheFrog();
	clock_t start = clock();
	double my_answer = obj->getMinimum(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 7.0;
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
	int p0 = 25;
	int t1[] = {11, 3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {21, 7};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	TheFrog * obj = new TheFrog();
	clock_t start = clock();
	double my_answer = obj->getMinimum(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 10.5;
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
	int p0 = 100;
	int t1[] = {0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {100};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	TheFrog * obj = new TheFrog();
	clock_t start = clock();
	double my_answer = obj->getMinimum(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 100.0;
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
	int p0 = 100;
	int t1[] = {0, 50};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {50, 100};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	TheFrog * obj = new TheFrog();
	clock_t start = clock();
	double my_answer = obj->getMinimum(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 50.0;
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
	int p0 = 30000;
	int t1[] = {17, 25281, 5775, 2825, 14040};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {55, 26000, 5791, 3150, 14092};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	TheFrog * obj = new TheFrog();
	clock_t start = clock();
	double my_answer = obj->getMinimum(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 787.8787878787879;
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

