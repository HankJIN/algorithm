//https://codeforces.com/problemset/problem/999/B
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    int n, k, temp, prefix = 0, suffiex = 0;
    cin >> n >> k; 
    int arr[n];
    for(int i =0 ; i< n; i++){
        cin >> arr[i];
    }    
    for(int i = 0; i < n; i++){
        if(arr[i]<=k)prefix++;
        else break;
    }
    for(int i = n-1; i >= prefix;i--){
        if(arr[i]<=k)suffiex++;
        else break;
    }
    cout << prefix+suffiex;
}