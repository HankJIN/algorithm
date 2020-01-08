//https://codeforces.com/problemset/problem/1003/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    int arr[101] = {0,},n,temp;
    cin >> n; for(int i = 0; i < n; i ++){cin>>temp,arr[temp]++;}
    temp = 0;
    for(int i = 0; i < 101; i++){temp = max(temp,arr[i]);}
    cout<<temp;
}