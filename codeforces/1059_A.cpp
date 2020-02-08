//https://codeforces.com/problemset/problem/1059/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n , L, a;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n >> L >> a;

    int t, l, cnt = 0, time = 0;
    for(int i = 0; i < n; i ++){
        cin >> t >> l;
        cnt = cnt + (t-time)/a;
        time = t + l;
    }
    cout<< cnt + (L-time)/a;
}   