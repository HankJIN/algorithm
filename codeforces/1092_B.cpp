//https://codeforces.com/problemset/problem/1092/B
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n;
vector<int> arr;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    arr.reserve(n);
    int temp;

    for(int i = 0; i < n ; i++){
        cin >> temp, arr.push_back(temp);
    }

    sort(arr.begin(),arr.end());

    int ans = 0;
    for(int i = 0; i < n; i = i +2){
        ans = ans + arr[i+1]-arr[i];
    }
    cout << ans;
}