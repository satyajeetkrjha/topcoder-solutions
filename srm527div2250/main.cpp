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

class P8XMatrixTransformation {
public:
	string solve(vector <string>, vector <string>);
};

string P8XMatrixTransformation::solve(vector <string> original, vector <string> target) {
	int one1=0;
	int one2=0;
	cout<<"original.size() :"<<original.size()<<endl;
	for(int i=0;i<original.size();i++){
        for(int j=0;j<original[i].size();j++){
           if(original[i][j]=='1')
            one1++;
        }

	}
	for(int i=0;i<target.size();i++){
        for(int j=0;j<target[i].size();j++){
            if(target[i][j]=='1')
            one2++;

        }
	}
	cout<<"one1 :"<<one1<<endl;
	cout<<"one2 :"<<one2<<endl;
	if(one1==one2)
        return "YES";
    else
        return "NO";
}

double test0() {
	string t0[] = {"01","11"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"11","10"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	P8XMatrixTransformation * obj = new P8XMatrixTransformation();
	clock_t start = clock();
	string my_answer = obj->solve(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "YES";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"0111","0011"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"1011","1100"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	P8XMatrixTransformation * obj = new P8XMatrixTransformation();
	clock_t start = clock();
	string my_answer = obj->solve(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "YES";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"0"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"1"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	P8XMatrixTransformation * obj = new P8XMatrixTransformation();
	clock_t start = clock();
	string my_answer = obj->solve(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "NO";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"1111","1111","0000","0000"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"1111","1111","0000","0000"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	P8XMatrixTransformation * obj = new P8XMatrixTransformation();
	clock_t start = clock();
	string my_answer = obj->solve(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "YES";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"0110","1001","0110"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"1111","0110","0000"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	P8XMatrixTransformation * obj = new P8XMatrixTransformation();
	clock_t start = clock();
	string my_answer = obj->solve(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "YES";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"0000","1111","0000"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"1111","0000","1111"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	P8XMatrixTransformation * obj = new P8XMatrixTransformation();
	clock_t start = clock();
	string my_answer = obj->solve(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "NO";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
		cout <<"Some of the test cases had errors." <<endl;*/
}


