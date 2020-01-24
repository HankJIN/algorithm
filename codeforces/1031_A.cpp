//https://codeforces.com/problemset/problem/1031/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
 
ll n ,w , h ,k , ans = 0, temp = 0;

int main(){

    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> w >> h >> k;

    for(int i = 0; i < k; i ++){
        ans = ans + 2*(w-i*4) +2*(h-i*4) -4;
    }
    cout << ans;
}
    