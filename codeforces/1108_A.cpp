//https://codeforces.com/problemset/problem/1108/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int a,b,n;
int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie();
    cin >> n;
    for(int i = 0; i < n; i++)
     {   cin >> a>>a>>b>>b;
     if(a==b)b= b-1;
     cout << a << ' ' <<b <<endl;
    }
}