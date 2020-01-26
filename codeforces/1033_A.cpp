//https://codeforces.com/problemset/problem/1036/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
 
ll n , a1, a2, b1, b2, c1, c2, temp ;

int main(){

    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> c1 >> c2 >> a1 >> a2 >> b1 >> b2;
    
    if(((a1 < c1) == (b1 < c1)) && ((a2< c2) == (b2 < c2))) cout << "YES";
    else cout <<"NO";
}
    