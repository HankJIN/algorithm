//https://codeforces.com/problemset/problem/1015/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int arr[k+1] = {0,};

    int j,l;
    for(int i = 0; i < n; i++){
        for(cin >>j >> l; j<=l;j++){
            arr[j] = 1;
        }
    }
    int temp = 0;
    for(int i = 1; i <= k ; i++){
        if(arr[i] == 0) temp++;
    }

    cout << temp << endl;

    for(int i = 1; i <= k; i++) if(arr[i] == 0)cout << i << " ";   
}
