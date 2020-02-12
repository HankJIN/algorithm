//https://codeforces.com/problemset/problem/1073/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n;
string str;
char temp;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n >> str;

    temp = NULL;
    for(int i = 1; i < n ; i++){
        if(str[i-1] != str[i] ){cout <<"YES\n" <<str.substr(i-1,2); return 0;}
    }
    cout << "NO";
}