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

class NetworkXMessageRecovery {
public:
	string recover(vector <string>);
};
const char infinite='{';//
string NetworkXMessageRecovery::recover(vector <string> messages) {
	int n=messages.size();// size of this vector 
	//char bestchar=infinite;
	string toposorted="";
	while(true){
		char bestchar =infinite;
	for(int i=0;i<n;i++){
		if(messages[i].size()!=0){
		char ch=messages[i][0];// take fisrt charcter of each string
		for(int j=0;j<n;j++){// check each string occurence of this charcterr but from first postion eg a>b>c and a>b>d
			for(int k=1;k<messages[j].size();k++){
				if(messages[j][k]==ch){
					ch=infinite;
				}
			}
		}
		bestchar=min(bestchar,ch);// every first charcter will be a possibility so check each firts charcter and pick smallest and if no charcter is there move out
	}
}
	if(bestchar==infinite){
		break;
	}
	cout<<"bestchar is "<<bestchar<<endl;
	toposorted+=bestchar;
	// now reduce each string by eliminating the bestchar found 
	for(int i=0;i<n;i++){
		if(messages[i][0]==bestchar && messages[i].size()!=0)
		messages[i]=messages[i].substr(1);
	}
	
	
}
return toposorted;
}
	
	
	
	
	


//<%:testing-code%>
//Powered by [KawigiEdit] 2

double test0() {
	string t0[] = {"acd", "bce"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	NetworkXMessageRecovery * obj = new NetworkXMessageRecovery();
	clock_t start = clock();
	string my_answer = obj->recover(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "abcde";
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
	string t0[] = {"ed", "dc", "cb", "ba"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	NetworkXMessageRecovery * obj = new NetworkXMessageRecovery();
	clock_t start = clock();
	string my_answer = obj->recover(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "edcba";
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
	string t0[] = {"Fox", "Ciel", "FoxCiel"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	NetworkXMessageRecovery * obj = new NetworkXMessageRecovery();
	clock_t start = clock();
	string my_answer = obj->recover(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "FoxCiel";
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
	string t0[] = {"a", "A"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	NetworkXMessageRecovery * obj = new NetworkXMessageRecovery();
	clock_t start = clock();
	string my_answer = obj->recover(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "Aa";
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
////<%:end-tests%>
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

