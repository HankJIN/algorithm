//https://codeforces.com/problemset/problem/1017/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

bool compare(const pair<int,int> &a, const pair<int,int> &b){
    if(a.first == b.first){
        return a.second<b.second;
    }
    return a.first > b.first;
}

int main(){
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, temp;
    cin >> n;
    pair<int,int> arr[n];
    for(int i = 0; i < n; i++){        
        for(int j = 0; j < 4; j++){
            cin >> temp;
            arr[i].first = arr[i].first + temp;
        }
        arr[i].second = i;
    }

    sort(arr,arr+n,compare);


    for(int i = 0; i < n; i++){
        if(arr[i].second == 0)return 0*printf("%d",i+1);
    }
    
    
}
