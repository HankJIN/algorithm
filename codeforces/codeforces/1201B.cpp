//https://codeforces.com/problemset/problem/1201/B
//round577_B.zero Array
#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long 
#define rep(i,bigin,end) for(ll i = (bigin); i < (end); i++)
#define endl "\n"
#define all(v) (v).begin(),(v).end() 

using namespace std;
bool answer;
ll a, maxnum, sum, n;

int main() {
	fastcin();
	cin >> n;
	rep(i, 0, n) {
		cin >> a;
		sum += a;
		maxnum = max(a, maxnum);
	}
	if (sum % 2 == 0 && maxnum * 2 <= sum)cout << "YES";
	else cout << "NO";

	return 0;
}

/*4
틀렸다. 문제을 잘못 해석한듯하다.
cin >> n;
set<int>::iterator itr;
rep(i, 0, n) {
cin >> temp;
if(myset.find(temp)!=myset.end())	myset.erase(myset.find(temp));
else myset.insert(temp);
}

if (myset.size() == 0)cout << "YES";
else cout << "NO";

*/