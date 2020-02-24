//https://codeforces.com/problemset/problem/1091/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int y,b,r, temp;


int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> y >> b >>r;

    cout << min(y+2,min(b+1,r))*3 -3;

}