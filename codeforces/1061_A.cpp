//https://codeforces.com/problemset/problem/1061/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

ll n ,s;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    cin >> n >> s;

    cout << s/n + (s%n != 0);
    
    
}