//https://codeforces.com/problemset/problem/1284/A
//code by HankJin   blog : HankJin.github.io
#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int x,y,z, coconut, sol;

int main(){
    cin >> x>> y >> z;

    coconut = (x+y)/z;

    if( (x%z + y%z)/z == 0) sol = 0;
    else sol = (x%z < y%z)?x%z:y%z;

    cout << coconut << " " <<sol;
    
}