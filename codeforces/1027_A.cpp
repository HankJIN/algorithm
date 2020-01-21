//https://codeforces.com/problemset/problem/1027/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
 
char temp;
string str;
int T, n;


int main(){

    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> T;

    for(int testCase = 0; testCase < T; testCase++){

        cin >> n >> str;
        int flag = 0;
        for(int i = 0; i < n/2;i++){
            if(abs(str[i]-str[n-1-i]) > 2 || abs(str[i]-str[n-1-i]) == 1){
                flag = 1;
                break;
            }
        }
        if(flag)cout <<"NO\n";
        else cout << "YES\n";
    }
    

}
    