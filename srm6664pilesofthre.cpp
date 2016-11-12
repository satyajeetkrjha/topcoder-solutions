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

class BearPlaysDiv2 {
public:
	string equalPiles(int, int, int);
};
// we go through all possible staes in a game 
int state[1500][100];// x and y 
const int reached=1;//true
const int not_reached=-1;//false

void f(int a[]){
	int x=a[0];int y=a[1];
	if(state[x][y]==reached)
	return ;
	if(state[x][y]==not_reached){
		state[x][y]=reached;// mark it reached 
		// try all possible pairs of unequal piles among threes and transfer 
		for(int i=0;i<3;i++)// 0 1 2
		{
			for(int j=0;j<3;j++){
				if(a[i]<a[j]){// create a new array and pass it
				int new_array[3];
				new_array[0]=a[i]+a[i];new_array[1]=a[j]-a[i];new_array[2]=a[3-i-j];
				f(new_array);
					
				}
					
				}
			}
		}
	}
	
string BearPlaysDiv2::equalPiles(int A, int B, int C) {
memset(state,not_reached,sizeof(state));
int arr[3];
arr[0]=A;arr[1]=B;arr[2]=C;
int sum=A+B+C;

	// recursion
	if(sum%3==0){
	f(arr);
	if(state[sum/3][sum/3]==reached)
	return "possible";
	
}
return "impossible";

}
















//<%:start-tests%>

double test0() {
	int p0 = 10;
	int p1 = 15;
	int p2 = 35;
	BearPlaysDiv2 * obj = new BearPlaysDiv2();
	clock_t start = clock();
	string my_answer = obj->equalPiles(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "possible";
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
	int p0 = 1;
	int p1 = 1;
	int p2 = 2;
	BearPlaysDiv2 * obj = new BearPlaysDiv2();
	clock_t start = clock();
	string my_answer = obj->equalPiles(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "impossible";
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
	int p0 = 4;
	int p1 = 6;
	int p2 = 8;
	BearPlaysDiv2 * obj = new BearPlaysDiv2();
	clock_t start = clock();
	string my_answer = obj->equalPiles(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "impossible";
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
	int p0 = 18;
	int p1 = 18;
	int p2 = 18;
	BearPlaysDiv2 * obj = new BearPlaysDiv2();
	clock_t start = clock();
	string my_answer = obj->equalPiles(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "possible";
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
	int p0 = 225;
	int p1 = 500;
	int p2 = 475;
	BearPlaysDiv2 * obj = new BearPlaysDiv2();
	clock_t start = clock();
	string my_answer = obj->equalPiles(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "possible";
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
