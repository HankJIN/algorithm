//https://codeforces.com/problemset/problem/1095/B
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
    int temp;

    for(int i = 0; i < n; i ++){
        cin >> temp; arr.push_back(temp); 
    }

    sort(arr.begin(),arr.end());

    cout << min(arr[n-1]-arr[1],arr[n-2]-arr[0]);
    
}