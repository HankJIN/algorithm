#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/1207/problem/A
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long 
#define rep(i,bigin,end) for(ll i = (bigin); i < (end); i++)
#define endl "\n"
#define all(v) (v).begin(),(v).end() 

int ans, b, p, f, h, c,t;
int m;

int main() {
	fastcin();

	cin >> t;
	rep(i, 0, t) {
		cin >> b >> p >> f >> h >> c;

		m = b / 2;
		
		if (h >c) {
			cout << h*min(m,p) + c*max(0,min(m - p, f))<<endl;
		}
		else cout << c*min(m, f) + h*max(0,min(m - f, p))<<endl;
	}
	return 0;
}
