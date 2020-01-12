//https://codeforces.com/problemset/problem/1008/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){

    string vowel = "aieoun";
    string str;
    cin >> str;
    bool is_vowel = (vowel.find(str[0]) != -1);
    for(int i = 1; i < str.size(); i++){
        if(is_vowel){
            is_vowel = (vowel.find(str[i]) != -1);
        }else{
            is_vowel = (vowel.find(str[i]) != -1);
            if(!is_vowel || str[i] == 'n')return printf("NO")*0;
        }
    }
    if(is_vowel)    cout << "YES";
    else cout << "NO";
}