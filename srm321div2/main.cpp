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

class LexStringWriter {
public:
	int minMoves(string);
};
bool seen[300];
int first[300];
int cnt[300];
int last[300];
int LexStringWriter::minMoves(string s) {
    for(int i=0;i<300;i++)
        seen[i]=0,first[i]=last[i]=cnt[i]=0;
	int n=s.size();
	for(int i=0;i<n;i++){
            char c=s[i];//
        if(!seen[c])
            first[c]=i;
            seen[c]=true;;
            last[c]=i;
        cnt[c]=cnt[c]+1;
	}
	int leftvalue,leftpos,rightval,rightpos;
	leftvalue=leftpos=rightpos=rightval=0;
	for(char c='a';c<='z';c++){
        if(!seen[c])
            continue;
        else{
            int newleftval=min(leftvalue+abs(last[c]-leftpos),rightval+abs(last[c]-rightpos))+abs(last[c]-first[c])+cnt[c];
            int newrightval=min(leftvalue+abs(first[c]-leftpos),rightval+abs(first[c]-rightpos))+abs(last[c]-first[c])+cnt[c];
            leftvalue=newleftval;rightval=newrightval;leftpos=first[c];rightpos=last[c];

        }
	}
	return min(leftvalue,rightval);
}
//<%:start-tests%>
double test0() {
	string p0 = "aaa";
	LexStringWriter * obj = new LexStringWriter();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 5;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string p0 = "ba";
	LexStringWriter * obj = new LexStringWriter();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string p0 = "abba";
	LexStringWriter * obj = new LexStringWriter();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 9;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string p0 = "acbbc";
	LexStringWriter * obj = new LexStringWriter();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 12;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
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

//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
