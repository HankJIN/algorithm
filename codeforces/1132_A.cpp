//https://codeforces.com/problemset/problem/1132/A
//code by HankJIN     blog Hankjin.github.io

#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define all(v) (v).begin(),(v).end() 
using namespace std;


int w1,w2,h1,h2;

int main() {

    fastcin();

    cin >> w1 >> h1 >> w2 >> h2;

    if(w1 == w2){
        cout << w1 + w2 + 2*h1 + 2*h2 + 4;
    }else
    {
        cout << w1 + w2 + 2 * h1 + 2 * h2 + 4 + (w1-w2);
    }
    
    return 0;
}