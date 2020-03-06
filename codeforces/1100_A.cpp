//https://codeforces.com/problemset/problem/1100/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


int n, k;
vector<int> arr;

int absolutValue(int a){
    if(a < 0) a = -a;
    return a;
}

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie();
    
    cin >> n >> k;


    arr.resize(k,0);

    int temp, sum = 0;

    for(int i = 0; i < n; i++){
        cin >> temp;
        arr[i%k] = arr[i%k] +temp;  
        sum = sum + temp;
    }

    int min_index = 0, max_index = 0;

    for(int i = 0; i < k; i ++){
        if(arr[i] < arr[min_index]) min_index = i;
        if(arr[i] > arr[max_index]) max_index = i;
    }

   cout << max(absolutValue(sum-arr[max_index]) ,absolutValue(sum-arr[min_index]));
       
}