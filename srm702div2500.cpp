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

class GridSort {
public:
	string sort(int, int, vector <int>);
};
set <int> diff;

string GridSort::sort(int n, int m, vector <int> grid) {
vector <int> v;
vector <int> row;
v.clear();
diff.clear();
if(n==1 || m==1)
return	"Possible";
for(int i=0;i<m;i++){// m columns
	for(int j=0;j<n;j++){// n rows
		int x=grid[j*m+i];
		v.push_back(x);
	}
	std::sort(v.begin(),v.end());
/*	for(int z=0;z<v.size();z++){
		cout<<v[z]<<" ";
	}
	cout<<endl;*/
	for(int k=0;k<v.size()-1;k++){
		//cout<<v[k+1]-v[k]<<endl;
		diff.insert(v[k+1]-v[k]);
	}
	v.clear();
	//cout<<"diff.size="<<diff.size()<<endl;
	if(diff.size()>1)
	return "Impossible";
	
}
if(diff.size()>1)
	return "Impossible";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int x=grid[i*m+j];
			row.push_back(x);
		}
		std::sort(row.begin(),row.end());
		for(int z=0;z<row.size()-1;z++){
			if(row[z+1]-row[z]>1)
			return "Impossible";
		}
		row.clear();
	}
	return	"Possible";

}
//<%:start-tests%>
double test0() {
	int p0 = 2;
	int p1 = 2;
	int t2[] = { 1,2, 3,4};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	GridSort * obj = new GridSort();
	clock_t start = clock();
	string my_answer = obj->sort(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Possible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 2;
	int p1 = 2;
	int t2[] = { 3,4, 1,2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	GridSort * obj = new GridSort();
	clock_t start = clock();
	string my_answer = obj->sort(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Possible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 2;
	int p1 = 2;
	int t2[] = { 4,3, 1,2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	GridSort * obj = new GridSort();
	clock_t start = clock();
	string my_answer = obj->sort(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Impossible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 1;
	int p1 = 10;
	int t2[] = {4,5,1,2,9,8,3,10,7,6};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	GridSort * obj = new GridSort();
	clock_t start = clock();
	string my_answer = obj->sort(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Possible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 3;
	int p1 = 5;
	int t2[] = { 10,6,8,9,7, 5,1,3,4,2, 15,11,13,14,12};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	GridSort * obj = new GridSort();
	clock_t start = clock();
	string my_answer = obj->sort(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Possible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int p0 = 6;
	int p1 = 2;
	int t2[] = { 11,12, 2,1, 9,10, 7,8, 6,5, 3,4};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	GridSort * obj = new GridSort();
	clock_t start = clock();
	string my_answer = obj->sort(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Impossible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
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
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

