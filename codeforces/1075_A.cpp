//https://codeforces.com/problemset/problem/1075/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

ll n, x, y, temp;



int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> x >> y;
    
    if(x+y -2< n) cout << "White";
    else cout << "Black";

}