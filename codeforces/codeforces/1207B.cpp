//https://codeforces.com/contest/1207/problem/B

#include <bits/stdc++.h>
using namespace std;

#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long 
#define rep(i,bigin,end) for(ll i = (bigin); i < (end); i++)
#define endl "\n"
#define all(v) (v).begin(),(v).end() 

int n, m;
int arr[51][51] = { 0, };
int arrB[51][51] = { 0, };

vector<int> ans;
int temp;

int main() {
	fastcin();

	cin >> n >> m;
	


	rep(i, 0, n*m) {
		cin >> temp;
		arr[i/m][i%m] = temp;
	}
	
	rep(i, 0, (n - 1)*(m - 1)) {
		if (arr[i / (m-1)][i%(m-1)]) {
			if (arr[i / (m - 1) + 1][i % (m - 1)] && arr[i / (m- 1)][i % (m - 1) + 1] && arr[i / (m- 1) + 1][i % (m - 1) + 1]) {
				ans.push_back(i);
				arrB[i / (m - 1)][i % (m - 1)] = arrB[i / (m - 1)][i % (m - 1)+1] = arrB[i / (m - 1) + 1][i % (m - 1)] = arrB[i / (m - 1) + 1][i % (m - 1) + 1] = 1;
			}
		}
	}
	rep(i, 0, m*n) {
		if (arrB[i / m][i%m] != arr[i / m][i%m]) 
		{ return 0 * printf("-1"); }
	}
	cout << ans.size()<<endl;
	rep(i, 0, ans.size())cout << ans[i] / (m - 1)+1 << " " << ans[i] % (m - 1)+1 << endl;
	

	return 0;
}
