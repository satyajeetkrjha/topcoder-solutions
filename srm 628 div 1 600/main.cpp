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
#define M 1000000007

class NarrowPassage2 {
public:
	int count(vector <int>, int);
};
vector <int> p;// this will store index like 0 1 2......9 of the size()
vector <int> s;
int maxval;
long  f(vector <int> p){
long res=0;
if(p.size()==0 || p.size()==1)// empty sequence or just one wolf
{
    res=1;
}
else{
    // find the index of smallest element and largest
    int a=0;
    int b=0;
    for(int i=1;i<p.size();i++){
        if(s[p[i]]>s[p[b]]){
            b=i;
        }
        if(s[p[i]]<s[p[a]]){
            a=i;
        }
    }
    // once we find index we can solve subproblems
    if(s[p[a]]+s[p[b]]<=maxval){
        // smallest element can occupy all positions and subproblem is q=p-a
       // erase the element at index a i
        vector <int> x=p;
        x.erase(x.begin()+a);
        res=(f(x)*p.size())%M;

    }
    else
    {
        // THE element at index b will divide the o to (b-1) and (b+1) to end
        // and we solve the two parts and we multiply them
        vector <int> x1(p.begin(),p.begin()+b);
        vector <int> x2(p.begin()+b+1,p.end());
        res=(f(x1)*f(x2))%M;

    }




}
return res;
}


int NarrowPassage2::count(vector <int> size, int maxSizeSum) {
	s=size;
	maxval=maxSizeSum;
	int len=s.size();//
	p.resize(len);
	for(int i=0;i<len;i++)
        p[i]=i;
       return f(p);


}


double test0() {
	int t0[] = {1, 2, 3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 3;
	NarrowPassage2 * obj = new NarrowPassage2();
	clock_t start = clock();
	int my_answer = obj->count(p0, p1);
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
	int t0[] = {1, 2, 3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 1000;
	NarrowPassage2 * obj = new NarrowPassage2();
	clock_t start = clock();
	int my_answer = obj->count(p0, p1);
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
double test2() {
	int t0[] = {1, 2, 3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 4;
	NarrowPassage2 * obj = new NarrowPassage2();
	clock_t start = clock();
	int my_answer = obj->count(p0, p1);
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
double test3() {
	int t0[] = {1,1,1,1,1,1,1,1,1,1,1,1,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 2;
	NarrowPassage2 * obj = new NarrowPassage2();
	clock_t start = clock();
	int my_answer = obj->count(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 227020758;
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
	int t0[] = {2,4,6,1,3,5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 8;
	NarrowPassage2 * obj = new NarrowPassage2();
	clock_t start = clock();
	int my_answer = obj->count(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 60;
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
double test5() {
	int t0[] = {1000000000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 1000000000;
	NarrowPassage2 * obj = new NarrowPassage2();
	clock_t start = clock();
	int my_answer = obj->count(p0, p1);
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

	time = test5();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

