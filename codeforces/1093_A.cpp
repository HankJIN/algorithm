//https://codeforces.com/problemset/problem/1093/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n,q;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;

    for(int sol = 0; sol < n; sol++){
        cin >> q;

        cout << q/7+1 <<endl;
    }

}