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

class TreeUnionDiv2 {
public:
	int maximumCycles(vector <string>, vector <string>, int);
};
int infinite=100000000;
int k;
int n;
int p[20];
int distA[100][100];// to store distance between nodes of tree1
int distB[100][100];// tree2
int cyclecount(){
    int c=0;
for(int x=0;x<n;x++){// trey all x y pairs but (x,y)=(y,x)
    for(int y=x+1;y<n;y++){
        if(distA[x][y]+distB[p[x]][p[y]]+2==k)
        {
             c++;
             cout<<" x "<<x<<" y "<<y<<" p[x] "<<p[x]<<" p[y] "<<p[y]<<endl;

        }

    }
}
return c;
}
int TreeUnionDiv2::maximumCycles(vector <string> tree1, vector <string> tree2, int K) {
k=K;
n=tree1.size();
// a0>a1=1 a1> a2=1 if a0>a1 and a1>a2
for(int i=0;i<n;i++){// matrix
    for(int j=0;j<n;j++){
        if(tree1[i][j]=='X'){
            distA[i][j]=1;
        }
        else{
            distA[i][j]=infinite;
        }
        if(tree2[i][j]=='X'){
            distB[i][j]=1;
        }
        else{
            distB[i][j]=infinite;
        }
    }
}
// floyyd warshall to calculate distance between all pairs
for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             if (distA[i][k] + distA[k][j] < distA[i][j]){
                    distA[i][j] = distA[i][k] + distA[k][j];
             }
            if (distB[i][k] + distB[k][j] < distB[i][j]){
                    distB[i][j] = distB[i][k] + distB[k][j];
             }
        }
    }
}
// all possible p's 0 to n permutations
for(int i=0;i<n;i++)
p[i]=i;
// now we do all the permutations
int ans=0;
while(next_permutation(p,p+n)){
    ans=max(ans,cyclecount());

}

return ans;
}
double test0() {
	string t0[] = {"-X", "X-"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"-X", "X-"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 4;
	TreeUnionDiv2 * obj = new TreeUnionDiv2();
	clock_t start = clock();
	int my_answer = obj->maximumCycles(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"-X-", "X-X", "-X-"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"-X-", "X-X", "-X-"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 5;
	TreeUnionDiv2 * obj = new TreeUnionDiv2();
	clock_t start = clock();
	int my_answer = obj->maximumCycles(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"-X-", "X-X", "-X-"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"-X-", "X-X", "-X-"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 3;
	TreeUnionDiv2 * obj = new TreeUnionDiv2();
	clock_t start = clock();
	int my_answer = obj->maximumCycles(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"-X---", "X-XXX", "-X---", "-X---", "-X---"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"-X-X-", "X-X-X", "-X---", "X----", "-X---"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 6;
	TreeUnionDiv2 * obj = new TreeUnionDiv2();
	clock_t start = clock();
	int my_answer = obj->maximumCycles(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 5;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {"-XX------", "X------X-", "X--XX-X--", "--X--X---", "--X------", "---X----X", "--X------", "-X-------", "-----X---"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"-X-------", "X-X------", "-X-XX----", "--X---X--", "--X--X---", "----X--XX", "---X-----", "-----X---", "-----X---"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 7;
	TreeUnionDiv2 * obj = new TreeUnionDiv2();
	clock_t start = clock();
	int my_answer = obj->maximumCycles(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 17;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
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
		errors = true;*/

	time = test1();
	if (time < 0)
		errors = true;

	/*time = test2();
	if (time < 0)
		errors = true;

	time = test3();
	if (time < 0)
		errors = true;

	time = test4();
	if (time < 0)
		errors = true;*/

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

