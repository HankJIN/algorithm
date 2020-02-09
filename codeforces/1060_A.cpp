//https://codeforces.com/problemset/problem/1061/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n , temp;
int digit[11] = {0,};
string str;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    cin >> n >> str;
    for(int i = 0; i < n; i ++){
        digit[str[i]-'0']++;
    }

    cout << min(n/11,digit[8]);
}   