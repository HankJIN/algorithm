//https://codeforces.com/problemset/problem/1182/A
//code by hankJin HankJin.github.io
#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int n, sol;

int main(){
    if (n%2 == 1) sol = 0;
    else sol = pow(2,n);
    cout << sol;
}