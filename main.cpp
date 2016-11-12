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
typedef long long ll;
class RemissiveSwaps {
public:
	int findMaximum(int);
};
bool visited[10000000];
int RemissiveSwaps::findMaximum(int N) {
    int  res=N;
	memset(visited,false,sizeof(visited));
	queue <int> Q;
	Q.push(N);
	visited[N]=true;
	while(!Q.empty()){
            int val=Q.front();
    Q.pop();
	for(int i=1;i<=val;i=i*10){
        for(int j=1;j<i;j=j*10){
            int digiti=((val/i)%10);// digit at ith position
            int digitj=((val/j)%10);// digit at jth position
            if(digiti>0 && digitj>0){
                int nextnumber=val-(digiti*i)-(digitj*j)+((digiti-1)*j)+((digitj-1)*i);
                if(visited[nextnumber]==false){
                        visited[nextnumber]=true;
                    res=max(res,nextnumber);
                    Q.push(nextnumber);
                }


            }
        }
	}
	}



	return res;

}
double test0() {
	int p0 = 166;
	RemissiveSwaps * obj = new RemissiveSwaps();
	clock_t start = clock();
	int my_answer = obj->findMaximum(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 560;
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
	int p0 = 3499;
	RemissiveSwaps * obj = new RemissiveSwaps();
	clock_t start = clock();
	int my_answer = obj->findMaximum(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 8832;
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
	int p0 = 34199;
	RemissiveSwaps * obj = new RemissiveSwaps();
	clock_t start = clock();
	int my_answer = obj->findMaximum(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 88220;
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
	int p0 = 809070;
	RemissiveSwaps * obj = new RemissiveSwaps();
	clock_t start = clock();
	int my_answer = obj->findMaximum(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 809070;
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
