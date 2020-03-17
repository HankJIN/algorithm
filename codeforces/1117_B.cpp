//https://codeforces.com/problemset/problem/1117/B
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

ll n, m, k, e;
vector<ll> emotes;

int main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> k;

    emotes.reserve(n);

    for(ll i = 0; i < n; i ++){
        cin >> e;
        emotes.push_back(e);
    }

    sort(emotes.begin(),emotes.end());

    cout << (emotes[n-1] * k + emotes[n-2] ) * (m/(k+1)) + m%(k+1)*emotes[n-1];

}