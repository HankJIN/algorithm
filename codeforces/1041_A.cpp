//https://codeforces.com/problemset/problem/1041/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
 
int n, temp, min_ = INT_MAX, max_ = 0;

int main(){

    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> temp;
        min_ = min(min_,temp);
        max_ = max(max_,temp);
    }

    cout << max_ - (min_ - 1) - n;
}
    