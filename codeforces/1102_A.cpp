//https://codeforces.com/problemset/problem/1104/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


int n;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie();
    
    cin >> n;
    if(n%2 ==0){
        if((n/2)%2 == 0) cout << 0;
        else cout << 1;
    }
    else{
        if((n/2)%2 == 0) cout << 1;
        else cout << 0;
    }
}