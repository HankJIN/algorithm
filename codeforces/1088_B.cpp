//https://codeforces.com/problemset/problem/1088/B
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n, k, temp;

set<int> mySet;
set<int>::iterator iter;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> temp; mySet.insert(temp);
    }

    iter = mySet.begin();
    int sum = 0;
    for(int i = 0; i < k; i ++){
        
        if(iter != mySet.end()){
                cout << *iter - sum << endl;
                sum = *iter++;
            }
        
        else cout << 0 << endl;
    }
}