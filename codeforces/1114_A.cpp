//https://codeforces.com/problemset/problem/1114/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

ll x, y, z, a, b, c;

int main(){

    std::ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    cin >> x >> y >> z >> a >> b >> c;

    if((x <= a) && (y <= a + b -x) && (z <= a + b + c - x- y)){
        cout << "YES" << endl;
    }
    else    cout << "NO";
    return 0;
}