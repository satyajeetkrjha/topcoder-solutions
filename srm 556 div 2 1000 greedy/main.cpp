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

class LeftRightDigitsGame {
public:
	string minNumber(string);
};
string smallest(string s){
string ans="";
for(int i=0;i<s.size();i++){
    if(ans+s[i]<s[i]+ans){// choose the smaller one
        ans+=s[i];
    }
    else{
        ans=s[i]+ans;
    }
}
return ans;
}

string LeftRightDigitsGame::minNumber(string digits) {
    string res="";
    //string big="9"+digits;
	// here digits can hv 50 characters
     for(int i=0;i<digits.size();i++){// we iterate through all digits
            //string s="";
        if(digits[i]!='0'){
             string s="";
            // make te ith digit first character
            s=digits[i];
            // now for 0 to i-1 character we use the lexiographically smallest
            if(i!=0)
            s=s+smallest(digits.substr(0,i));
            // now append all the characters from i+1 to size()-1 at end of it
              if(i!=digits.size()-1)// ie we are not at last character
                    s+=digits.substr(i+1,digits.size()-(i+1));
            // s is the newly formed result
            // store
            if(res==""|| res>s)// initially we had a bigger number in res and we found one smaller so updated
            res=s;
        }
        //if(res==""|| res>s)// initially we had a bigger number in res and we found one smaller so updated
       // res=s;
        //res=min(s,big);
     }
     return res;
}
double test0() {
	string p0 = "565";
	LeftRightDigitsGame * obj = new LeftRightDigitsGame();
	clock_t start = clock();
	string my_answer = obj->minNumber(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "556";
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
	string p0 = "9876543210";
	LeftRightDigitsGame * obj = new LeftRightDigitsGame();
	clock_t start = clock();
	string my_answer = obj->minNumber(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "1234567890";
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
	string p0 = "8016352";
	LeftRightDigitsGame * obj = new LeftRightDigitsGame();
	clock_t start = clock();
	string my_answer = obj->minNumber(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "1086352";
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

	time = test0();
	if (time < 0)
		errors = true;

	time = test1();
	if (time < 0)
		errors = true;

	time = test2();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}


