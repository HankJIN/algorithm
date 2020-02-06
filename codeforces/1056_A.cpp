//https://codeforces.com/problemset/problem/1059/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n, l, temp ;
int arr[101] ={0,};
int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n;

    for(int i = 0; i < n; i++){
        for(cin >> l; l >0; l--){
        cin >> temp;
        arr[temp]++;
        }
    }
    
    for(int i = 0; i < 101 ; i++){
        if(arr[i]== n)cout <<i <<" ";
    }

}   