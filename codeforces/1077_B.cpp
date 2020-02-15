//https://codeforces.com/problemset/problem/1077/B
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int a,b,k,ans;
int arr[101];

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin>> n;
    for(int i = 0 ; i < n ; i++){
        cin >> temp;
        arr[i] = temp;
    }
    int cnt = 0;

    for(int i = 1; i < n-1; i++){
        if(arr[i]==0 && arr[i-1] == 1 && arr[i+1] == 1){
            cnt ++;
            arr[i+1] = 0;
        }

    }
    cout << cnt;
}