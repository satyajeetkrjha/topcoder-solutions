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

class TreeAndPathLength2 {
public:
	string possible(int, int);
};
int nodes,total;
bool visited [55][55][1005];
 void dfs(int n,int leaves,int numberofpaths){
if(visited[n][leaves][numberofpaths]==false){
    visited[n][leaves][numberofpaths]=true;
for(int i=1;n+i<=nodes;i++){// add a children to the leaf of the tree but number of nodes at present +1<=total number of nodes
    int ns=numberofpaths+i+i*(i-1)/2;
    if(ns<=total)
     dfs( n+i,leaves-1+i,ns);
}
}
 }
string TreeAndPathLength2::possible(int n, int s) {
	// n is number of nodes and s is number of 2-length path we need
	nodes=n;
	total=s;
	for(int children=1;children+1<=nodes;children++){// children as i from 1 to( n-1) as 1 node is root
       int  ns=children*(children-1)/2;// for a tree with i children we have this number of 2-length path
         if(ns<=total)// if number of two walk path is less than s we need do dfs
            dfs(children+1,children,ns);// i was children so added one
	}
	for(int i=0;i<=nodes;i++){
        if(visited[nodes][i][total]==true)
            return "Possible";

	}
	return "Impossible";

}
double test4() {
	int p0 = 50;
	int p1 = 999;
	TreeAndPathLength2 * obj = new TreeAndPathLength2();
	clock_t start = clock();
	string my_answer = obj->possible(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Impossible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
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

	/*time = test5();
	if (time < 0)
		errors = true;*/

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}


//Powered by [KawigiEdit] 2.0!
