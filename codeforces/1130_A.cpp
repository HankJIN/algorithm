//https://codeforces.com/problemset/problem/1130/A
//code by HankJin               hankjin.github.io

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m, zero = 0, pos = 0, neg = 0;

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        if(m > 0) pos++;
        else if( m < 0) neg++;
        else zero++;
    }

    if((n+1)/2  > max(pos,neg)){
        cout << 0;
    }
    else {
        if(pos > neg)cout << 1;
        else cout << -1;
    }

}