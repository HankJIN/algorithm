//https://codeforces.com/problemset/problem/1106/C
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

ll n, ans, temp;
vector<ll> arr;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie();
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp); 
    }

    sort(arr.begin(),arr.end());

    ans = 0;

    for(int i = 0; i < n/2; i++){
        ans = ans + (arr[i]+arr[n-1-i])*(arr[i]+arr[n-1-i]);
    }
    cout << ans;
    return 0;
}
