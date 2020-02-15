//https://codeforces.com/problemset/problem/1080/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n, k, temp;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin>> n >> k;
    
    cout << (n*8)/k + n*5/k + n*2/k + (n*8%k!=0) +(n*5%k!=0) +(n*2%k!=0);
}