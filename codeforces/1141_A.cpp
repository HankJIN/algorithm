//https://codeforces.com/problemset/problem/1141/A
//code by Hank Jin          blog : hankJin.github.io
#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"
using namespace std;

int n, m, temp;

int main(){
    fastcin();

    int cnt = 0;

    cin >>n >> m;

    if(m%n == 0){
        temp = m/n;
        for( ;temp%2 == 0; cnt++){
            temp = temp/2;
        }
        for( ;temp%3 == 0; cnt++){
            temp = temp /3;
        }
        if(temp == 1)cout << cnt;
        else cout << -1;
    }
    else cout << -1;
}