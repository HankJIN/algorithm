//https://codeforces.com/problemset/problem/1132/B
//code by HankJIN     blog HankJin.github.io

#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define all(v) (v).begin(),(v).end() 
using namespace std;

vector<int> chocolateBars;
vector<int> coupons;

int m, n, l;
long long sum;

int main(){

    fastcin();
    sum = 0;

    cin >> n;
    chocolateBars.reserve(n);
    for(int i = 0; i < n; i ++){
        cin >> l, chocolateBars.push_back(l);
        sum = sum + l;
    }

    cin >> m;
    coupons.reserve(m);
    for(int i = 0; i < m; i++){
        cin >> l, coupons.push_back(l);
    }

    sort(all(chocolateBars));

    for(int i = 0; i < m; i++){
        cout << sum - chocolateBars[n-coupons[i]] << endl;
    }

}