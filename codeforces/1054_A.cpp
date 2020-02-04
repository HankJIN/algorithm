//https://codeforces.com/problemset/problem/1054/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int x, y, z, temp, t1, t2, t3;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    
    cin >> x >> y >> z >> t1 >> t2 >> t3;

    if(abs(t1*(x-y)) >= abs(t2*(x-y)) + abs(t2*(z-x)) + 3*t3)cout << "YES";
    else cout << "NO";

    
    


}   