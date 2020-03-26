//https://codeforces.com/problemset/problem/1141/B
//code by hank Jin      blog : hankJin.github.io
#include <bits/stdc++.h>
#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
using namespace std;

int n, m;

int main(){
    fastcin();
    cin >> n;

    int start = -1, max_rest = 0, cnt = 0;

    for(int i = 0; i < n; i ++){
        cin >> m;
        if(start == -1){
            if(m == 1){
                cnt ++;
            }
            else{
                start = cnt;
                max_rest = start;
                cnt = 0;
            }
        }
        else{
            if(m == 1){ 
                cnt = cnt + 1;
                if(i == n-1){
                    max_rest = max(max_rest, cnt + start);
                }
            }
            else {
                max_rest = max(max_rest, cnt);
                cnt = 0;
            }
        }
    }
    cout << max_rest << endl;
}