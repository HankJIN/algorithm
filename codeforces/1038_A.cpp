//https://codeforces.com/problemset/problem/1038/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
 
int n , k , alphabet[26] ={0,};
string str;

int main(){

    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> k >> str;

    for(int i = 0; i < n; i++){
        alphabet[str[i] - 'A']++;
    }

    int _min = INT_MAX;

    for(int i = 0; i  < k ; i++){
        _min = min(_min,alphabet[i]);
    }

    cout << _min*k;

}
    