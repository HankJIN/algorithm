//https://codeforces.com/problemset/problem/1110/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int b, k, n, temp;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie();

    cin >> b>>k;
    temp = 0;
    if(b%2 == 0){
        for(int i = 0; i < k; i++){
            cin>>n;
        }
        temp = temp + (n%2);
    }
    else{
        for(int i = 0; i < k; i++){
            cin >> n;
            temp = temp + (n%2);
        }
    }

    if(temp%2 == 0) cout << "even";
    else cout <<"odd";
}