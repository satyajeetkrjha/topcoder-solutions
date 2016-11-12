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
typedef long long ll;
class BuildingTowers {
public:
	long long maxHeight(int, int, vector <int>, vector <int>);
};

bool ispossible(int N, int k, vector <int> x, vector <int> t,ll h){
  vector<pair<int,int> > val;// location(first) and +1 or -1 (second) for in valid or valid)
  val.push_back(make_pair(1,1));
  val.push_back(make_pair(N+1,-1));
for(int i=0;i<x.size();i++){

        if(t[i]<h){
           ll r=(h-t[i]-1)/k;// integer or say floor division performed
            int   lo=(int)max(x[i]-r,1LL);// invalid begins here
           int  hi=(int)min( x[i]+r+1,ll(N+1));
            // invalid ends here and hi is included in invalid

      val.push_back(make_pair(lo,-1));
      val.push_back(make_pair(hi,+1));
}
}
sort(val.begin(),val.end());
int sum=0;// if no of open
for(int i=0;i<val.size();i++){
    int invalidvalid=val[i].second;
    sum+=invalidvalid;
    if(sum > 0)
            return true;
        }

        return false;
}


long long BuildingTowers::maxHeight(int N, int K, vector <int> x, vector <int> t) {
	x.push_back(1);t.push_back(0);//first building should be of zero height
	ll low=0;// MINIMUM possible
	ll high=((1LL)<<60);
	// do binary search
	while(high-low>1){
        ll mid=(low+high)/2;
        if(ispossible( N, K, x, t, mid)==true)
            low=mid;
        else
            high=mid;
	}
	return low;


}
double test0() {
	int p0 = 10;
	int p1 = 1;
	int t2[] = {3,8};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {1,1};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	BuildingTowers * obj = new BuildingTowers();
	clock_t start = clock();
	long long my_answer = obj->maxHeight(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 3LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 1000000000;
	int p1 = 1000000000;
	vector <int> p2;
	vector <int> p3;
	BuildingTowers * obj = new BuildingTowers();
	clock_t start = clock();
	long long my_answer = obj->maxHeight(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 999999999000000000LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 20;
	int p1 = 3;
	int t2[] = {4,7,13,15,18};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {8,22,1,55,42};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	BuildingTowers * obj = new BuildingTowers();
	clock_t start = clock();
	long long my_answer = obj->maxHeight(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 22LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 780;
	int p1 = 547990606;
	int t2[] = {34,35,48,86,110,170,275,288,313,321,344,373,390,410,412,441,499,525,538,568,585,627,630,671,692,699,719,752,755,764,772};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {89,81,88,42,55,92,19,91,71,42,72,18,86,89,88,75,29,98,63,74,45,11,68,34,94,20,69,33,50,69,54};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	BuildingTowers * obj = new BuildingTowers();
	clock_t start = clock();
	long long my_answer = obj->maxHeight(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 28495511604LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 7824078;
	int p1 = 2374;
	int t2[] = {134668,488112,558756,590300,787884,868112,1550116,1681439,1790994,1796091,1906637,2005485,2152813,2171716,2255697,2332732,2516853,2749024,2922558,2930163,3568190,3882735,4264888,5080550,5167938,5249191,5574341,5866912,5936121,6142348,6164177,6176113,6434368,6552905,6588059,6628843,6744163,6760794,6982172,7080464,7175493,7249044};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {8,9,171315129,52304509,1090062,476157338,245,6,253638067,37,500,29060,106246500,129,22402,939993108,7375,2365707,40098,10200444,3193547,55597,24920935,905027,1374,12396141,525886,41,33,3692,11502,180,3186,5560,778988,42449532,269666,10982579,48,3994,1,9};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	BuildingTowers * obj = new BuildingTowers();
	clock_t start = clock();
	long long my_answer = obj->maxHeight(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 1365130725LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
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

	time = test4();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}


