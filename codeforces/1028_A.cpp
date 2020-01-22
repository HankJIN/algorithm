//https://codeforces.com/problemset/problem/1028/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
 
ll r, c, first = -1, last = -1;
char temp;


int main(){

    std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> r >> c;

    for(int i = 0; i < r*c; i++){
        cin >> temp;
        if(temp == 'B' && first == -1) first = i;
        if(temp == 'B')last = i;
    }
  // cout << "last : " << last << "// first : " << first <<endl;
    cout << (first/c+last/c)/2 +1 << " " << (first%c + last%c)/2 + 1;
}
    