//https://codeforces.com/problemset/problem/999/B
//code by Hank Jin               blog HankJin.github.io
 
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    string str;
    int n;
    cin >> n>> str;
    for(int i = n; i >0; i--){
        if(n%i == 0){
            int dived = n/i;
            for(int j = 0; j < dived/2;j++){
                char temp = str[j];
                str[j] =  str[dived-1-j];
                str[dived-1-j]=temp;
            }          
        }
    }
    cout << str;
}