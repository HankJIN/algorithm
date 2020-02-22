//https://codeforces.com/problemset/problem/1088/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n, temp;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n ;

    if(n == 1)cout << -1;
    else cout << n << " " << n;
}