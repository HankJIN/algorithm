//https://codeforces.com/problemset/problem/1013/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, sum = 0;
    int temp = INT_MAX;

    cin >> n;
    int arr[n];
    for(int i = 0; i < 2; i++){
        sum = 0;
        for(int j = 0; j < n; j++){
            cin >> arr[j];
            sum += arr[j];
        }
        if(sum > temp)return 0*printf("No");
        else temp = sum;
    }    
    
    cout << "Yes";
}
