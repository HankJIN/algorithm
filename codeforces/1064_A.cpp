//https://codeforces.com/problemset/problem/1064/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

ll n ,a,b,c;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    cin >> a >> b >> c;

    n = 2 * max(a,max(b,c)) - (a+b+c) ;

    if (n < 0)cout << 0;
    else cout <<n+1;

}