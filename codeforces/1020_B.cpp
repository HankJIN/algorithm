//https://codeforces.com/problemset/problem/1025/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
 
int n, temp;
int student[1002] = {0,};
int cnt[1002] = {0,};
int main(){

    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin>>temp, student[i]=temp; 
   }

    for(int i = 1; i <= n; i++){
        memset(cnt,0,sizeof(cnt));
        temp = i;
        while(++cnt[temp] < 2){
            temp = student[temp];
        }

        cout << temp << " ";
    }        
}
