//https://codeforces.com/problemset/problem/1025/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
 
int n, temp;
int alphabet[26] = {0,};
string str;


int main(){

    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> str;

    for(int i = 0; i < n; i++){
        alphabet[str[i]-'a']++;
    }
    temp =0;
    for(int i = 0; i < 26; i++){
        if(alphabet[i]==1)temp ++;
    }
    cout << (temp!=n||n==1? "YES" :"NO");    
}
    