//https://codeforces.com/problemset/problem/1093/B
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n;
string str;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;

    for(int sol = 0; sol < n; sol++){
        cin >> str;

        sort(str.begin(),str.end());
        if(str[0]==str[str.size()-1])cout<<-1<<endl;
        else cout << str << endl;

    }

}