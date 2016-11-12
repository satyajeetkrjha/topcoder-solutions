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

class NonXorLife {
public:
	int countAliveCells(vector <string>, int);
};
const int infinite=1000000;
const int OFFSET=1500;// doesn't let go negative
const int maxii=3100;// 1550 1550 or -1500  -1500
const int dx[4]={0,0,-1,-1};
const int dy[4]={-1,-1,0,0};
bool check(int r,int c){
if (r<0 || c<0 || r>=3100 || c>=3100)
    return false;
 return true;

}
 int dist[3500][3500];
int NonXorLife::countAliveCells(vector <string> field, int K) {
	int R=field.size();// rows
	int C=field[0].size();// columns
	memset(dist,infinite,sizeof(dist));
	queue <int> q;
	for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
            if(field[r][c]=='o'){// alive cell so we will dso bfs from this so push it first in queue
                    q.push(r+OFFSET);
                    q.push(c+OFFSET);
                    dist[r+OFFSET][c+OFFSET]=0;

            }
        }
	}
	while(!q.empty()){
        int r=q.front();q.pop();
        int c=q.front();q.pop();
        int d=dist[r][c];
        // GET THE ROW AND COLUMN AND MOVE TO NEW ROW  AND COLUMN
        for(int i=0;i<4;i++){
                int nr=r+dx[i];
                int nc=c+dy[i];
                //bool flag=check(nr,nc);
                if(nr>=0 && nc>=0 && nr<maxii && nc<maxii){
                    if(dist[nr][nc]>d+1){
                        dist[nr][nc]=d+1;
                        q.push(nr);
                        q.push(nc);
                    }
                }

        }



	}
	int c=0;

	for(int i=0;i<maxii;i++){
        for(int j=0;j<maxii;j++){
            if(dist[i][j]<=K)
                c++;
        }
	}

	return c;

}

//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
//<%:start-tests%>
double test0() {
	string t0[] = {"oo","o."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 3;
	NonXorLife * obj = new NonXorLife();
	clock_t start = clock();
	int my_answer = obj->countAliveCells(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 36;
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
	string t0[] = {"..",".."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 23;
	NonXorLife * obj = new NonXorLife();
	clock_t start = clock();
	int my_answer = obj->countAliveCells(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
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
	string t0[] = {"o"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1000;
	NonXorLife * obj = new NonXorLife();
	clock_t start = clock();
	int my_answer = obj->countAliveCells(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2002001;
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
	string t0[] = {"o.oo.ooo","o.o.o.oo","ooo.oooo","o.o..o.o","o.o..o.o","o..oooo.","..o.o.oo","oo.ooo.o"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1234;
	NonXorLife * obj = new NonXorLife();
	clock_t start = clock();
	int my_answer = obj->countAliveCells(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3082590;
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
