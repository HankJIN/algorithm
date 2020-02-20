//https://codeforces.com/problemset/problem/1084/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n, temp;
int arr[101];
int arr2[101];

int absolValue(int a){
    return a>0? a : -a;
}

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i ++){
        cin >> temp;
        arr[i] = temp;
        arr2[i] = 0;
    }

    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){ //
            arr2[i] = arr2[i] + arr[j]*2*(i+j+absolValue(i-j));
        }
        ans = min(ans, arr2[i]);
    }
    cout << ans;

}