//https://codeforces.com/problemset/problem/1040/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
 
int n, a[3] = {0,} ,ans = 0, temp, min_ = INT_MAX, max_ = 0;
int arr[21];

int main(){

    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    cin >> n >> a[0] >> a[1];
    
    for(int i = 0; i < n ; i++){
        cin >> temp;
        arr[i] = temp;
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == 2){
            arr[i] = arr[n-1-i];
            ans = ans + a[arr[n-1-i]];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[n-1-i]) return 0*printf("-1");
        if(arr[i] == 2) ans = ans + min(a[0],a[1]);
    }
    cout << ans;
}
    