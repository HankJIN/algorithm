//https://codeforces.com/problemset/problem/1140/A
//code by hankJin       blog : HankJIN.github.io
#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int n, m, d, result;

int main(){
    fastcin();

    cin >> n;
    
    result = 0;
    for(int i = 0; i < n; result++){
        for(d = i+1 ; i< d ; i++){
            cin >> m;
            d = max(m,d);
        }
    }
    cout << result;
}