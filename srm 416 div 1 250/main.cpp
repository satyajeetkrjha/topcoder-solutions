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

class MostCommonLetters {
public:
	string listMostCommon(vector <string>);
};

int  freq[200];
//int res=-10;
string MostCommonLetters::listMostCommon(vector <string> text) {
   // string ans="";
	for(int i=0;i<text.size();i++){
        string  x=text[i];
        for(int j=0;j<x.size();j++){
            int  c=(int)(x[j]);
            cout<<" c is "<<c<<endl;
            freq[c]++;
            //int val =freq[c];
            //cout<<" val "<<val<<endl;
           // res=max(res,val);
        }
	}
        int val=0;
        for(int i=97;i<=97+25;i++){
            if(freq[i]>=val)
                val=freq[i];
        }
        cout<<"val "<<val<<endl;
         string ans="";
        for(char c='a';c<='z';c++){
            int intval=(int)(c);
            if(freq[intval]==val)
                ans=ans+c;
        }

        return ans;
	}

double test0() {
	string t0[] = {"abc a"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MostCommonLetters * obj = new MostCommonLetters();
	clock_t start = clock();
	string my_answer = obj->listMostCommon(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "a";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"abc", "ab"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MostCommonLetters * obj = new MostCommonLetters();
	clock_t start = clock();
	string my_answer = obj->listMostCommon(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "ab";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"qwerty", "abc", "qwe", "a"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MostCommonLetters * obj = new MostCommonLetters();
	clock_t start = clock();
	string my_answer = obj->listMostCommon(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "aeqw";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"english is a west germanic language originating", "in england and is the first language for most", "people in the united kingdom the united", "states canada australia new zealand ireland", "and the anglophone caribbean it is used", "extensively as a second language and as an", "official language throughout the world", "especially in commonwealth countries and in", "many international organizations"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MostCommonLetters * obj = new MostCommonLetters();
	clock_t start = clock();
	string my_answer = obj->listMostCommon(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "a";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"amanda forsaken bloomer meditated gauging knolls", "betas neurons integrative expender commonalities", "latins antidotes crutched bandwidths begetting", "prompting dog association athenians christian ires", "pompousness percolating figured bagatelles bursted", "ninth boyfriends longingly muddlers prudence puns", "groove deliberators charter collectively yorks", "daringly antithesis inaptness aerosol carolinas", "payoffs chumps chirps gentler inexpressive morales"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MostCommonLetters * obj = new MostCommonLetters();
	clock_t start = clock();
	string my_answer = obj->listMostCommon(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "e";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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

	/*time = test0();
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
		errors = true;*/

	time = test4();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}



//Powered by [KawigiEdit] 2.0!
