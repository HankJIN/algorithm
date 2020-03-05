//https://codeforces.com/problemset/problem/1099/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


int w,h,u1,u2,d1,d2;



int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie();
    
    cin >> w >> h >> u1 >> d1 >> u2 >> d2;

    for(int i = h; i > 0; i--){
        w = w + i;

        if(i == d1)  w = w - u1;
        if(i == d2) w = w - u2;
        if(w < 0) w = 0;        
    }

    cout << w;
    

}