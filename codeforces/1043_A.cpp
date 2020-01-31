//https://codeforces.com/problemset/problem/1043/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
 
int n, temp, sum = 0, maxVote = 0;
 
int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        sum = sum + temp;
        maxVote = max(maxVote,temp);
    }
 
    for(ll i = maxVote; i < 202; i++){
        if(i*n > 2*sum)return 0*printf("%d",i);
    }
}
    