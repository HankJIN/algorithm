//https://codeforces.com/problemset/problem/1138/A
//code by hank JIN         blog : HankJin.github.io
#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
using namespace std;

int n, m, cntMax;
int arr[2] = {0,0};

int main(){
    fastcin();

    cin >> n >> m;


    int flag = m;
    arr[m - 1]++;

    for(int i = 1; i < n; i++){
        cin >> m;

        if(flag == m){
            arr[m - 1]++;    
        }
        else{
            cntMax = max(cntMax , min(arr[0],arr[1]));
            flag = m;
            arr[m-1] = 1;
        }
    }
    cntMax = max(cntMax , min(arr[0],arr[1]));

    cout << cntMax*2;
}