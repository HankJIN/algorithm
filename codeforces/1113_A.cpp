//https://codeforces.com/problemset/problem/1113/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

ll n, v, ans;

int main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> v;

    if(n > v) ans = v;
    else ans = n -1;


    for(ll i = 0, j = 2; i < n - v-1; i++,j++){
        ans = ans + j;
    }
    cout << ans;
}