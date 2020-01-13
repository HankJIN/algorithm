//https://codeforces.com/problemset/problem/1009/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n ,k ;
    cin >> n >> k;
    int shop[n];
    int bill[k];

    for(int i =0;i<n;i++)cin>>shop[i];
    for(int i =0;i<k;i++)cin>>bill[i];
    
    int j = 0;
    for(int i = 0; i < n && j < k; i++){
        if(shop[i] <= bill[j]) j++;
    }
    cout << j;
}