//https://codeforces.com/problemset/problem/1096/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


int n, l, r;
int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;

    for(int i=0; i< n; i ++){
        cin >> l >> r;
        cout << l << " "<<l*2 << endl;
    }
}
