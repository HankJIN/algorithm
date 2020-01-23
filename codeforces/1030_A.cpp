//https://codeforces.com/problemset/problem/1030/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
 
ll n, temp;

int main(){

    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> temp;
        if(temp == 1)return 0*printf("HARD");

    }   
    cout <<"EASY";
}
    