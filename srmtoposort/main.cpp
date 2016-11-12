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
vector <int> adj[500];
bool visited[500]=false;
string NetworkXMessageRecovery::recover(vector <string> messages) {
	int n=messages.size();
	for(int i=0;i<n;i++){
            string x=messages[i];// get the first string
        for(int j=0;j<=x.size()-2;j++){// construct a graph
            int  v1=x[j]-'0';
            char v2=x[j+1]-'0';
            adj[v1].push_back(v2);// construct an edge
        }
	}
	void toposort(char c){
	int x=c-'0';




	}






}
