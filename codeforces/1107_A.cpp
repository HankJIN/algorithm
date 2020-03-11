//https://codeforces.com/problemset/problem/1107/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int q,n;
string s;
int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie();
    cin >> q;

    for(int question = 0; question < q; question++){
        cin >> n >> s;

        if(n == 2 && s[0] >= s[1]){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl << 2 << endl << s[0] << ' '<<s.substr(1) << endl;
        }

    }
}