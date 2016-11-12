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

class NetworkXOneTimePad {
public:
	int crack(vector <string>, vector <string>);
};
set<string> s;// contians all plaintexts 
string xorfun(string s,string t){
		string ans="";
		for(int i=0;i<s.size();i++){
			if(s[i]==t[i])// 0 0 is 1 and 1 1 is 0 but 0 1 or 1 0 is 1
			ans+='0';
			else
			ans+='1';
		}
		return ans;
	}
int NetworkXOneTimePad::crack(vector <string> plaintexts, vector <string> ciphertexts) {
	for(int i=0;i<plaintexts.size();i++)
	s.insert(plaintexts[i]);// all strings of plaintextarray in set
	int ans=0;
	
	for(int i=0;i<plaintexts.size();i++){
		string key=xorfun(plaintexts[i],ciphertexts[0]);// do xor of first ciphertext with each plaintext for possible keys 
		// we do xor of this key with each of ciphertexts and check if there exists that xor string in plaintext array
		int val=0;
		for(int j=0;j<ciphertexts.size();j++){
			string curr=xorfun(ciphertexts[j],key);
			if(s.count(curr)==1){// if xored string is in plaintextarray incrraese the count 
				val=val+1;
			}
			
		}
		if(val==ciphertexts.size())
		ans+=1;
	}
	
	return ans;
}
	
	
	


//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
//<%:start-tests%>
double test0() {
	string t0[] = {"110", "001"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"101", "010"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	NetworkXOneTimePad * obj = new NetworkXOneTimePad();
	clock_t start = clock();
	int my_answer = obj->crack(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	string t0[] = {"00", "01", "10", "11"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"00", "01", "10", "11"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	NetworkXOneTimePad * obj = new NetworkXOneTimePad();
	clock_t start = clock();
	int my_answer = obj->crack(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	string t0[] = {"01", "10"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"00"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	NetworkXOneTimePad * obj = new NetworkXOneTimePad();
	clock_t start = clock();
	int my_answer = obj->crack(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	string t0[] = {"000", "111", "010", "101", "110", "001"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"011", "100"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	NetworkXOneTimePad * obj = new NetworkXOneTimePad();
	clock_t start = clock();
	int my_answer = obj->crack(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 6;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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

