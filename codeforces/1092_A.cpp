//https://codeforces.com/problemset/problem/1092/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int question_Number, n, k, temp;


int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> question_Number;

    for(int question = 0; question <question_Number; question++)
    {
        cin >> n >> k;

        char output = 'a'-1;
        for(int i = 0; i < n/k*k; ){
            output++;
            for(int j = 0; j < n/k; j++, i++){
                cout << output;
            }
        }
        for(int i = 0; i < n%k; i++)cout << output;

        cout << endl;
    }
}