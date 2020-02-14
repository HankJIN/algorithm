//https://codeforces.com/problemset/problem/1077/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int query;
ll a, b, k, ans;


int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin>> query;
    for(int q = 0; q< query; q++){
        cin >> a >> b >> k;

        if(k%2 == 0)cout << k/2*(a-b) << endl;
        else cout << k/2*(a-b) + a << endl;
    }
}