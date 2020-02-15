//https://codeforces.com/problemset/problem/1080/B
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n, l, r, temp;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin>> n;

    for(int query = 0; query < n; query++){
        cin >> l >> r;
        if(r%2 == 0){ r  = r/2;}
        else r = r/2 -r;

        if((l-1)%2 == 0)l = (l-1)/2;
        else l = (l-1)/2 -(l-1);
        
        cout << r - l << endl;
    }
}