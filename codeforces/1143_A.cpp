//https://codeforces.com/problemset/problem/1143/A
//code by HankJin   blog : HankJin.github.io
#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int n, k;

int main(){
    cin >> n;
    
    int arr[2];
    for(int i = 0; i < n; i++){
        cin >> k;
        if(k == 0) arr[0] = i+1;
        else arr[1] = i+1;
    }
    cout << min(arr[0],arr[1]) <<endl;
}