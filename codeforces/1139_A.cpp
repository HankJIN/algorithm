//https://codeforces.com/problemset/problem/1139/A
//code by Hank Jin         blog : HankJin.github.io
#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
using namespace std;

int n;
string m;

int main(){
    fastcin();

    cin >> n >> m;

    int result = 0;

    for(int i = 0; i < n; i ++){
        if(m[i]%2 == 0)result = result + i+1;
    }
    cout << result;
}