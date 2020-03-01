//https://codeforces.com/problemset/problem/1095/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n;
string cipher;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> cipher;

    int index = 0;
    for(int i = 1; index < n; i++){
        cout << cipher[index];
        index = index + i;
    }

}