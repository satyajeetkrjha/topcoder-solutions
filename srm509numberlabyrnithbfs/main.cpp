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

class NumberLabyrinthDiv2 {
public:
	int getMinimumNumberOfMoves(vector <string>, int, int, int, int, int);
};
// we move from vertex (r1,c1,k) to vertex(r2,c2,x) for 1<=x<=k

const int infinite=100000000;
 int dx[4] = {0,0,1,-1};
 int dy[4] = {1,-1,0,0};
int NumberLabyrinthDiv2::getMinimumNumberOfMoves(vector <string> board, int r1, int c1, int r2, int c2, int K) {
	int R=board.size();// total number of rows
	int C=board[0].size();// number of columns
	int dist[55][55][55];
	// we will not intitilaze dist matrix with zero but instead with infinity as we mark our first vertex dist[r1][c1][k]=0
	for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            for(int k=0;k<=K;k++){
                dist[i][j][k]=infinite;
            }
        }
	}
	// we start with vertex (r1,c1,k) and mark this dist to be 0 and we have k chances left
	dist[r1][c1][K]=0;
	queue <int> q;// push all r1,c1,k in queue in order
	q.push(r1);
	q.push(c1);
	q.push(K);
	while(!q.empty()){
        // get all the three from fifo
        int r=q.front();
        //cout<<" r is "<<r<<endl;
        q.pop();
        int c=q.front();
       // cout<<"c is "<<c<<endl;
        q.pop();
        int k=q.front();
       // cout<<" k is "<<k<<endl;
        q.pop();

        if(r==r2 && c==c2)// destination cell
            return dist[r2][c2][k];
        // we try all
        for(int d=1;d<=9;d++){// these are the digits to be used
               // cout<<"d is "<<d<<endl;
                for(int i=0;i<4;i++ ){// directions
            // if this (r,c) is neither empty nor digit is d then break and move to next possible d
                   // cout<<" i is "<<i<<endl;
                    bool flag=false;;
                    // the vertex (r,c,k) either contains any one of digit d or it is empty ,if it is empty we try all digits from 1 to 9
                    if(board[r][c]=='.' && k>0)
                         flag=true;
                     // cout<<"board[r][c]=="<<board[r][c]<<endl;
                      // cout<<"falg is "<<flag<<endl;
                    if(flag==true || (board[r][c]-'0'==d)){
                       // cout<<"enter into if part "<<endl;
                        int nr=r+dx[i]*d;
                      //  cout<<"nr is "<<nr<<endl;
                        int nc=c+dy[i]*d;
                       // cout<<"nc is "<<nc<<endl;
                        int nk;
                        if(flag==true){// it means cell is empty so we need to reduce k by 1
                             nk=k-1;
                        }
                        else{
                            nk=k;
                        }
                        // make sure we don't move out of cell
                        if(nr>=0  && nc>=0 && nr<R && nc<C  && (dist[nr][nc][nk]>dist[r][c][k]+1)){

                        dist[nr][nc][nk]=dist[r][c][k]+1;
                        q.push(nr);
                        q.push(nc);
                        q.push(nk);


                    }
                }
                else{
                    break;
                }
        }

	}

	}

	return -1;

}

//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!

//<%:start-tests%>
double test0() {
	string t0[] = {"...2", "....", "3..."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	int p2 = 0;
	int p3 = 2;
	int p4 = 3;
	int p5 = 0;
	NumberLabyrinthDiv2 * obj = new NumberLabyrinthDiv2();
	clock_t start = clock();
	int my_answer = obj->getMinimumNumberOfMoves(p0, p1, p2, p3, p4, p5);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p6 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p6 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p6 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"...2", "....", "3..."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	int p2 = 0;
	int p3 = 2;
	int p4 = 3;
	int p5 = 1;
	NumberLabyrinthDiv2 * obj = new NumberLabyrinthDiv2();
	clock_t start = clock();
	int my_answer = obj->getMinimumNumberOfMoves(p0, p1, p2, p3, p4, p5);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p6 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p6 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p6 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"...3", "....", "2..."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	int p2 = 0;
	int p3 = 2;
	int p4 = 3;
	int p5 = 3;
	NumberLabyrinthDiv2 * obj = new NumberLabyrinthDiv2();
	clock_t start = clock();
	int my_answer = obj->getMinimumNumberOfMoves(p0, p1, p2, p3, p4, p5);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p6 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p6 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p6 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"55255", ".0.0.", "..9..", "..3..", "3.9.3", "44.44"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 3;
	int p2 = 2;
	int p3 = 4;
	int p4 = 2;
	int p5 = 10;
	NumberLabyrinthDiv2 * obj = new NumberLabyrinthDiv2();
	clock_t start = clock();
	int my_answer = obj->getMinimumNumberOfMoves(p0, p1, p2, p3, p4, p5);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p6 = 6;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p6 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p6 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {"920909949", "900020000", "009019039", "190299149", "999990319", "940229120", "000409399", "999119320", "009939999"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 7;
	int p2 = 3;
	int p3 = 1;
	int p4 = 1;
	int p5 = 50;
	NumberLabyrinthDiv2 * obj = new NumberLabyrinthDiv2();
	clock_t start = clock();
	int my_answer = obj->getMinimumNumberOfMoves(p0, p1, p2, p3, p4, p5);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p6 = 10;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p6 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p6 != my_answer) {
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

	time = test4();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
