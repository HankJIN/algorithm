//https://codeforces.com/problemset/problem/1111/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int arphabet[26];
char vowels[5] = {'a','i','o','u','e'};

string s, t;

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie();

    cin >> s >> t;
    
    for(int i = 0; i < 26; i++){arphabet[i]=0;}

    for(int i = 0; i < 5; i++){arphabet[vowels[i]-'a'] = 1;}

    if(s.size() != t.size()){
        return printf("no")*0;
    }
    else{
        for(int i = 0; i < s.size(); i++){
            if(arphabet[s[i]-'a'] != arphabet[t[i]-'a'])return printf("no")*0;
        }
    }
    cout << "yes";
}