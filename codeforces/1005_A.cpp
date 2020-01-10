//https://codeforces.com/problemset/problem/1005/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp = 0, k;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> k;
        if(k <= temp)arr.push_back(temp);

        temp = k;
    }
    arr.push_back(temp);
    cout << arr.size() << endl;
    for(int i = 0; i < arr.size(); i++){cout << arr[i] << " ";}
}