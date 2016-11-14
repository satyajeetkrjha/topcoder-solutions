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

class MagicBoard {
public:
	string ableToUnlock(vector <string>);
};
int matrix[105][105];
bool visited[105][105];
int rows[105];int columns[105];
int n,m;
void dfs(int x,int y){
if(matrix[x][y]==0)// no star
    return;
if(visited[x][y]==true) // already visited
    return;
    visited[x][y]=1;// mark it
    for(int i=0;i<n;i++)//rows
        dfs(i,y);
    for(int i=0;i<m;i++)
        dfs(x,i);




}
string MagicBoard::ableToUnlock(vector <string> board) {
	 n=board.size();// n rows and m columns ,n is total number of strings
	 m=board[0].size();// size of each string
	for(int i=0;i<105;i++)
        rows[i]=0,columns[i]=0;
	int odddegrees=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        matrix[i][j]=0,visited[i][j]=false;
	int startx=0;int starty=0;// we will begin dfs from this vertex and see all those cells which can be visited from this cells
	for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]=='#'){// if there is a star we will have 1 on that point in our matrix
                matrix[i][j]=1;
                // increase the degree for that row and column because an edge is formed with (i,j)
                rows[i]++;
                columns[j]++;
                startx=i;
                starty=j;
            }
        }
	}
	for(int i=0;i<n;i++){
        if(rows[i]%2==1)// odd
            odddegrees++;
	}
	for(int i=0;i<m;i++){
        if(columns[i]%2==1)
            odddegrees++;
	}
	if(odddegrees>2)// an euler path can have atmost two nodes with odd degrees
        return "NO";
    if(odddegrees==2){// two odds are for two extremes start and last
        bool flag=false;
        for(int i=0;i<m;i++){
            if(columns[i]%2==1)// odd columns
                flag=true;
        }
        if(flag==false)
        return "NO";


    }
    // use dfs
    dfs(startx,starty);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==1 && visited[i][j]==false)
                return "NO";
        }
    }

	return "YES";

}
//<%:start-tests%>
double test0() {
	string t0[] = {"##", ".#"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "YES";
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
	string t0[] = {"#.", ".#"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "NO";
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
	string t0[] = {"##", "##", "##"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "YES";
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
	string t0[] = {"###", "###", "###"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "NO";
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
	string t0[] = {"###", "..#", "###", "#..", "###"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "NO";
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
double test5() {
	string t0[] = {"................", ".######..######.", ".######..######.", ".##......##..##.", ".##......##..##.", ".######..######.", ".######..######.", ".....##..##..##.", ".....##..##..##.", ".######..######.", ".######..######.", "................"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "YES";
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
double test6() {
	string t0[] = {"#"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "YES";
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

	time = test5();
	if (time < 0)
		errors = true;

	time = test6();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

