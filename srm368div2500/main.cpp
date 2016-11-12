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

class TurningLightOn {
public:
	int minFlips(vector <string>);
};
bool on[100][100];
int TurningLightOn::minFlips(vector <string> board) {
    int r=board.size();int c=board[0].size();
	for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
                if(board[i][j]=='1')
                    on[i][j]=1;
                    else
                        on[i][j]=0;

        }
	}
	int ans=0;
	for(int i=r-1;i>=0;i--){
        for(int j=c-1;j>=0;j--){
            if(on[i][j]==0){
                    ans++;
                for(int x=0;x<=i;x++){
                    for(int y=0;y<=j;y++){
                        on[x][y]=!on[x][y];
                    }
                }
            }
        }
	}
	return ans;
}

//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
//<%:start-tests%>
double test0() {
	string t0[] = {"0001111", "0001111", "1111111"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TurningLightOn * obj = new TurningLightOn();
	clock_t start = clock();
	int my_answer = obj->minFlips(p0);
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
double test1() {
	string t0[] = {"1111111", "1111111", "1111111"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TurningLightOn * obj = new TurningLightOn();
	clock_t start = clock();
	int my_answer = obj->minFlips(p0);
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
	string t0[] = {"01001"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TurningLightOn * obj = new TurningLightOn();
	clock_t start = clock();
	int my_answer = obj->minFlips(p0);
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
	string t0[] = {"0101", "1010", "0101", "1010"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TurningLightOn * obj = new TurningLightOn();
	clock_t start = clock();
	int my_answer = obj->minFlips(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 7;
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
