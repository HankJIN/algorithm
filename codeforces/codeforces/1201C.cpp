//https://codeforces.com/problemset/problem/1201/C
//round577_C.Maxmum median
#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long 
#define rep(i,bigin,end) for(ll i = (bigin); i < (end); i++)
#define endl "\n"
#define all(v) (v).begin(),(v).end() 

using namespace std;
bool answer;
int n, m;
int t, p;
int k;
vector<int> arr;

int sol(int n, int & m) {
	p = arr[n / 2];
	rep(i, n / 2, n) {
		arr[i];
		if (arr[i] == p) {}
		else
		{
			if ((i - n / 2)*(arr[i] - p) <= m) {
				m = m - (i - n / 2)*(arr[i] - p);
				p = arr[i];

				arr[n / 2] = p;
			}
			else {
				arr[n / 2] = arr[n / 2] + m / (i- n/2);
				break;
			}
		}
		if(i==n-1)		arr[n / 2] += m / (n - n / 2);
	}

	return arr[n / 2];
}

int main() {
	fastcin();
	arr.reserve(200001);
	cin >> n >> m;
	rep(i, 0, n) {
		cin >> k, arr.push_back(k);
	}
	sort(all(arr));

	cout << sol(n, m);
	return 0;
}
