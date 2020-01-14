//https://codeforces.com/problemset/problem/1011/A
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
std::ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k, sum = 0;
    set<char> alphabet;

    cin >> n >> k;
    
    for(int i = 0; i < n; i ++){
        char temp;
        cin >> temp;
        alphabet.insert(temp);
    }

    set<char>::iterator iter = alphabet.begin();
    
    char lastword = 'a'-2;
    int stage = 0;
    for(;iter != alphabet.end() && stage<k; iter++){
        if(*iter >lastword + 1){
            sum = sum + *iter-'a'+1;
            lastword = *iter;
            stage++;
        }
    }

    cout << ((stage==k)?sum:-1);

}