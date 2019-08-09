//https://codeforces.com/problemset/problem/1199/B
#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long a
#define rep(i,bigin,end) for(ll i = (bigin); i < (end); i++)
#define endl "\n"
#define all(v) (v).begin(),(v).end() 
using namespace std;

int main() {
	fastcin();

	float answer;
	float h, l;

	cin >> h >> l;

	answer = (l*l - h*h) / (2 * h);

	cout << fixed;
	cout.precision(6);
	cout << answer;

	return 0;
}