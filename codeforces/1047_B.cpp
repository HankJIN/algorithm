//https://codeforces.com/problemset/problem/1047/B
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

ll n, ans, x ,y;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    ans = 0;
    for(int i = 0; i < n; i ++){
        cin >> x >> y;
        ans = max(x+y, ans);
    }
    cout << ans;
}   