#define io(v) cin>>v // cin>>v[i]
#define INF 100000000 // 1e8 (given)
// function to find min or max
#define FUNCTION(name, operatorr) void name(int& min_max, int vec_i){ min_max = (min_max operatorr vec_i) ? min_max : vec_i;}
#define toStr(str) #str // convert to string
#define foreach(v,i) for(int i=0; i<v.size(); i++) // convert into for loop to iterate vector 

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}
