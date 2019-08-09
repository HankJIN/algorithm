//https://codeforces.com/problemset/problem/1201/B
//round577_A.Imporatant exam
#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long a
#define rep(i,bigin,end) for(int i = (bigin); i < (end); i++)
#define endl "\n"
#define all(v) (v).begin(),(v).end() 

using namespace std;
int n, m, answer;
char temp;
vector<vector<int>> a;
vector<int> score;
int main() {
	fastcin();

	cin >> n >> m;
	
	a.resize(m, vector<int>(5,0));
	
	rep(i, 0, n) {//m번째 문제의 정답 분포 입력.
		rep(j, 0, m) {
			cin >> temp;
			a[j][temp - 'A']++;
		}
	}
	int temp_score;
	rep(i, 0, m)cin >> temp_score, score.push_back(temp_score);

	rep(i, 0, m) {
		answer += max(max(max(a[i][0], a[i][1]), max(a[i][2], a[i][3])), a[i][4])*score[i];
	}
	/*
	      for (ll j=0; j<5; j++)
        {
            ma=max(ma, b[i][j]);
        }
        ans+=ma*a[i];
		로 좀더 깔끔하고 가독성있는 코드를 만들수 있었는데..
	*/

	cout << answer;
	return 0;
}