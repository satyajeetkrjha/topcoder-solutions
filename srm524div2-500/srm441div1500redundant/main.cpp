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

class StrangeCountry {
public:
	int transform(vector <string>);
};
vector <string> gr;
int n;
int vercomp[55];// number of vertices in the component
int redcomp[55];// number of redundant edges in component
int comp;// components with redundant edges
int compno;// component no 1 2 3 4.....
int nored;// number of components with non- redundant edges
bool used[55][55];// edges used or not used
bool visited[55];
void dfs(int curr_comp,int u,int par){// u is node or say vertex
    //cout<<"vertex u is "<<u<<endl;
if(visited[u]==true)
    return;
    visited[u]=true;
    //cout<<"vertex u marked true "<<endl;
    vercomp[curr_comp]++;// number of vertices in current component increased
    for(int v=0;v<n;v++){// neighbor but not parent AND IT IS not visited and there exists an edge from u to v
        // cout<<" v iterated is "<<v<<endl;
        // cout<<"visited["<<v<<"] is "<<visited[v]<<" gr["<<u<<"]["<<v<<"] is "<<gr[u][v]<<endl;
        if( visited[v]==false && gr[u][v]=='Y' && par!=v ){//
        used[u][v]=used[v][u]=true;
       // cout<<"USED u and v are "<<u<<" "<<v<<endl;
        // carry dfs from this node
        dfs(curr_comp,v,u);// now u is parent of v

        }

    }
    for(int i=0;i<=u;i++){
        if(gr[u][i]=='Y' && used[u][i]==false){
            redcomp[curr_comp]++;
            //cout<<"redundant edge is "<<u<< ">"<<i<<endl;
    }
}
}





int StrangeCountry::transform(vector <string> g) {
	gr=g;
    n=gr.size();
    cout<<"nodes in total are "<<n<<endl;
    memset(used,false,sizeof(used));// all are marked false
    memset(visited,false,sizeof(visited));
    nored=0;//
    comp=0;// both initially zero
    compno=0;
    // start a dfs for all connected components
   // int connected=0;
    for(int i=0;i<n;i++){
        if(visited[i]==false){
               // cout<<"component no is "<<compno<<endl;
                vercomp[compno]=0;
                redcomp[compno]=0;
            dfs(compno,i,-1);
            //cout<<"dfs started "<<endl;
            //cout<<vercomp[compno]<<endl;
        if(vercomp[compno]==1)// only one vertex
        return -1;
        if(redcomp[compno]==0)// no redundant edge
            nored++;// so number of components with non redundant increased
            else{
                //  number of components with redundant edge increased
                redcomp[comp]=redcomp[compno];// updated redundant edges and total vertexes  for this component
             comp++;
            }

       compno++;// number of  component overall  increased
    }
    }
   // cout<<"compno is "<<compno<<endl;
    //cout<<"comp is "<<comp<<endl;
    int total=0;// total operations
    cout<<"comp is "<<comp<<endl;
    cout<<"nored is "<<nored<<endl;
   // bool flag=true;
    while(comp && nored){
            //flag=false;
            total++;
    if(redcomp[comp]==1)// only one redundant edge
    {
        comp--;//decrease the number of components
        nored--;//decrease the number of non redundant components by 1

    }
    else{
        redcomp[comp]--;
        nored--;

    }
    }
    if(nored+comp==1)
        return total;
        if(comp>0 && nored==0)
            return total+comp;
  if(nored>0)
    return -1;


    }


//%:start-tests%>
double test0() {
	string t0[] = {"NYYNNNNNNN", "YNYNNNNNNN", "YYNNNNNNNN", "NNNNYYNNNN", "NNNYNYNNNN", "NNNYYNNNNN", "NNNNNNNYNN", "NNNNNNYNNN", "NNNNNNNNNY", "NNNNNNNNYN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StrangeCountry * obj = new StrangeCountry();
	clock_t start = clock();
	int my_answer = obj->transform(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = -1;
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
	string t0[] = {"NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "YNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StrangeCountry * obj = new StrangeCountry();
	clock_t start = clock();
	int my_answer = obj->transform(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 16;
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
	string t0[] = {"NYYNNNN", "YNYNNNN", "YYNNNNN", "NNNNYYN", "NNNYNYY", "NNNYYNY", "NNNNYYN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StrangeCountry * obj = new StrangeCountry();
	clock_t start = clock();
	int my_answer = obj->transform(p0);
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
double test3() {
	string t0[] = {"NYNYNNNNNNNN", "YNYNNNNNNNNN", "NYNYYNNNNNNN", "YNYNNNNNNNNN", "NNYNNYYNNNNN", "NNNNYNYNNNNN", "NNNNYYNNNNNN", "NNNNNNNNYYNN", "NNNNNNNYNYNN", "NNNNNNNYYNNN", "NNNNNNNNNNNY", "NNNNNNNNNNYN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StrangeCountry * obj = new StrangeCountry();
	clock_t start = clock();
	int my_answer = obj->transform(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 2;
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
double test4() {
	string t0[] = {"NYNNNN", "YNYNNN", "NYNYNN", "NNYNNN", "NNNNNY", "NNNNYN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StrangeCountry * obj = new StrangeCountry();
	clock_t start = clock();
	int my_answer = obj->transform(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = -1;
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

	time = test4();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
