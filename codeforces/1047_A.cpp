//https://codeforces.com/problemset/problem/1047/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

ll n, temp;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    
     cout << 1 <<" "<< 1 + ((n-2)%3 == 0) <<" "<< n-2 - ((n-2)%3 == 0);
}   