//https://codeforces.com/problemset/problem/1006/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    int n,a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        cout << (a%2==0 ? a-1 : a) <<" ";
    }

}