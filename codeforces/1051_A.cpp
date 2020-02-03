//https://codeforces.com/problemset/problem/1059/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

ll n, l, temp ;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cout << "YES"<<endl;
    cin >> n >> l;

    for(ll i = n; i <l; i= i +2){
        cout << i << " "<<i+1<<endl;
    }
}   