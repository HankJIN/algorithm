//https://codeforces.com/problemset/problem/1016/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int day = 0;
    for(int i = 0; i < n; i ++){
        cout << arr[i]/k << " ";
        arr[i+1] = arr[i+1]+ arr[i]%k;
    }
    
}
