//https://codeforces.com/problemset/problem/1106/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

vector<vector<int>> arr;
int n, ans, col, row;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie();
    cin >> n;

    arr.resize(n,vector<int>(n,0));
    char temp;
    ans = 0;

    for(int i = 0; i < n*n; i++){
        cin >> temp;
        if(temp == 'X')
            arr[i%n][i/n] = 1;
    }
    
    row = n - 2;
    col = n - 2;

    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            if(arr[r][c]){
                if(arr[r+2][c]&& arr[r+2][c+2] && arr[r][c+2]&&arr[r+1][c+1])
                    ans++;
            }
        }
    }

    cout << ans;0
}