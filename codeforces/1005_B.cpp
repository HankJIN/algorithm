//https://codeforces.com/problemset/problem/1005/B
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    string str1,str2;

    cin >> str1 >> str2;
    int a = 0;
    for(int i = 0; i < min(str1.size(),str2.size()); i++){
        if(str1[str1.size()-1-i] == str2[str2.size()-1-i])a++;
        else break;
    }

    cout << str2.size()+str1.size()-2*a;

}