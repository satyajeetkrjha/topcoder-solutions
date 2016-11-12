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
typedef long ll;
class MonstersValley2 {
public:
	int minimumPrice(vector <int>, vector <int>);
};
vector <ll> dr;
vector <int> pr;

int n1;
int fun(int p,ll currentdread){
    if(p==n1){
        return 0;
    }
    else{
      int res=fun(p+1,currentdread+dr[p])+pr[p];// bribed the pth monster
        if(currentdread>=dr[p]){// we will not bribe the pth monster this time
           res=min(res,(fun(p+1,currentdread)));
        }

        return res;
    }
}

int MonstersValley2::minimumPrice(vector <int> dread, vector <int> price) {
    n1=price.size();
	//n2=price.size();
	// f(p,currentdread) means we dealt with n monsters and total scariness is current dread
	vector <ll> dr(dread.begin(),dread.end());
	pr=price;
	int  ans=fun(0,0);
	return ans;

}
double test0() {
	int t0[] = {8, 5, 10};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 1, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MonstersValley2 * obj = new MonstersValley2();
	clock_t start = clock();
	int my_answer = obj->minimumPrice(p0, p1);
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
	int t0[] = {1, 2, 4, 1000000000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 1, 1, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MonstersValley2 * obj = new MonstersValley2();
	clock_t start = clock();
	int my_answer = obj->minimumPrice(p0, p1);
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
double test2() {
	int t0[] = {200, 107, 105, 206, 307, 400};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 2, 1, 1, 1, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MonstersValley2 * obj = new MonstersValley2();
	clock_t start = clock();
	int my_answer = obj->minimumPrice(p0, p1);
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
	int t0[] = {5216, 12512, 613, 1256, 66, 17202, 30000, 23512, 2125, 33333};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2, 2, 1, 1, 1, 1, 2, 1, 2, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MonstersValley2 * obj = new MonstersValley2();
	clock_t start = clock();
	int my_answer = obj->minimumPrice(p0, p1);
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

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

