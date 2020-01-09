//https://codeforces.com/problemset/problem/1004/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    int n, d, temp;
    cin >> n >> d;
    ll arr[n];
    ll min = -1000000000 , max = 1000000000, ans = 0;
    cin>> arr[0];
    for(int i = 1;  i< n; i++){
        cin>>arr[i];
        if(abs(arr[i]-arr[i-1]) >= 2*d)ans = ans +(abs(arr[i]-arr[i-1])==2*d?1:2);
    }

    cout << ans+2;
}