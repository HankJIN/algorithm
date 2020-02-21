//https://codeforces.com/problemset/problem/1085/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n, temp;
string str;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> str;

    int index = (str.size()%2 == 0)?str.size()/2 -1: str.size()/2;
    
    for(int i = 0;-1< i && i < str.size(); i ++){
        cout<< str[index];
        if(i%2 == 0)index = index + (i+1);
        else index = index - (i+1);
    //3 1 2 4
    }
}