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

class GooseTattarrattatDiv1 {
public:
	int getmin(string);
};
int ans=0;
string s;
string compo;
bool visited[55];
// i is the current index ,if charcter at this index is not visited, mark it visited
// look for all those indexes which has a relation with this index and do df with that index
int cost(string s){
    int maximum=0;
    for(int i=0;i<s.length();i++){
            int c=0;
        char ch=s[i];
        for(int j=0;j<s.length();j++){
            if(s[j]==ch)
                c++;
        }
        maximum=max(c,maximum);

    }
    return s.length()-maximum;
}


void dfs(int i){// current index
if(visited[i]==false){
    visited[i]=true;// mark index
     compo.push_back(s[i]);// push into component
    for(int j=0;j<s.length();j++){// look fgr neighbours which satisfy relations
        if(s[i]==s[j] || j==s.length()-i-1)// both relations
            dfs(j);
    }
}
}
int GooseTattarrattatDiv1::getmin(string S) {
    ans=0;
    s=S;
	int n=S.length();
	memset(visited,false,sizeof(visited));

	for(int i=0;i<n;i++){
        if(visited[i]==false){
            compo="";
            dfs(i);// start dfs from this index
            ans+=cost(compo);
        }
	}

	return ans;
}
//<%:start-tests%>
double test0() {
	string p0 = "geese";
	GooseTattarrattatDiv1 * obj = new GooseTattarrattatDiv1();
	clock_t start = clock();
	int my_answer = obj->getmin(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 2;
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
	string p0 = "tattarrattat";
	GooseTattarrattatDiv1 * obj = new GooseTattarrattatDiv1();
	clock_t start = clock();
	int my_answer = obj->getmin(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 0;
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
	string p0 = "xyyzzzxxx";
	GooseTattarrattatDiv1 * obj = new GooseTattarrattatDiv1();
	clock_t start = clock();
	int my_answer = obj->getmin(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 2;
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
	string p0 = "xrepayuyubctwtykrauccnquqfuqvccuaakylwlcjuyhyammag";
	GooseTattarrattatDiv1 * obj = new GooseTattarrattatDiv1();
	clock_t start = clock();
	int my_answer = obj->getmin(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 11;
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
double test4() {
	string p0 = "abaabb";
	GooseTattarrattatDiv1 * obj = new GooseTattarrattatDiv1();
	clock_t start = clock();
	int my_answer = obj->getmin(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 3;
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

	time = test4();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}


//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
