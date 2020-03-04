//https://codeforces.com/problemset/problem/1097/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

vector<string> arr(6,"");

int main(){
    
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }

    for(int i = 1; i < 6; i++){
        if(arr[0][0] == arr[i][0] || arr[0][1] == arr[i][1]) return 0*printf("YES");
    }
    
    cout << "NO";
}