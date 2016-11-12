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

class CmpdWords {
public:
	int ambiguous(vector <string>);
};

int CmpdWords::ambiguous(vector <string> dictionary) {
set<string> s1;set<string> s2;
s1.clear();s2.clear();
for(int i=0;i<dictionary.size();i++)
    s1.insert(dictionary[i]);
for(int i=0;i<dictionary.size();i++){
    for(int j=0;j<dictionary.size();j++){
        if(i==j)
            continue;
        else{
            string concat=dictionary[i]+dictionary[j];
            if(s1.count(concat)!=0){// concatened word is in dictionary so ambigious
                s2.insert(concat);

            }
            else{
                s1.insert(concat);
            }


        }
    }
}
return s2.size();







}
//<%:start-tests%>
double test0() {
	string t0[] = {"am","eat","a", "meat", "hook","meathook"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	CmpdWords * obj = new CmpdWords();
	clock_t start = clock();
	int my_answer = obj->ambiguous(p0);
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
	string t0[] = {"a","b","c"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	CmpdWords * obj = new CmpdWords();
	clock_t start = clock();
	int my_answer = obj->ambiguous(p0);
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
	string t0[] = {"a","aa","aaa"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	CmpdWords * obj = new CmpdWords();
	clock_t start = clock();
	int my_answer = obj->ambiguous(p0);
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
double test3() {
	string t0[] = {"abc","bca","bab","a"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	CmpdWords * obj = new CmpdWords();
	clock_t start = clock();
	int my_answer = obj->ambiguous(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 1;
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
