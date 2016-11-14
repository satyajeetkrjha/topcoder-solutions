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
const int big=1000000;

class EqualizeStrings {
public:
	string getEq(string, string);
};
int f(char x,char y){
int left=abs(x-y);
int right=(26-left)%26;
int ans=min(left,right);
return ans;


}
char equalize(char x,char y){
char bestchar='{';
int best=big;
for(char r='a';r<='z';r++){
    int cost=f(x,r)+f(y,r);// cost to change x to r and y to r
    if(cost<best){
        best=cost;// minimum cost
        bestchar=r;// this character is good to change both to
    }
}
return bestchar;
}



string EqualizeStrings::getEq(string s, string t) {
int n=s.size();// size of string
for(int i=0;i<n;i++){
    s[i]=equalize(s[i],t[i]);// we try to equalize the characters at all positions
}
return s;
}
//<%:start-tests%>
double test0() {
	string p0 = "cat";
	string p1 = "dog";
	EqualizeStrings * obj = new EqualizeStrings();
	clock_t start = clock();
	string my_answer = obj->getEq(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "caa";
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
	string p0 = "abcdefghijklmnopqrstuvwxyz";
	string p1 = "bcdefghijklmnopqrstuvwxyza";
	EqualizeStrings * obj = new EqualizeStrings();
	clock_t start = clock();
	string my_answer = obj->getEq(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "abcdefghijklmnopqrstuvwxya";
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
	string p0 = "programmingcompetitionsrule";
	string p1 = "programmingcompetitionsrule";
	EqualizeStrings * obj = new EqualizeStrings();
	clock_t start = clock();
	string my_answer = obj->getEq(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "programmingcompetitionsrule";
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
	string p0 = "topcoderopen";
	string p1 = "onlinerounds";
	EqualizeStrings * obj = new EqualizeStrings();
	clock_t start = clock();
	string my_answer = obj->getEq(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "onlcndaoondn";
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

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}




