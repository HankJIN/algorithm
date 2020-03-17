//https://codeforces.com/problemset/problem/1118/A
//code by HankJin.       blog : hankJin.github.io

#include <iostream>
#define endl '\n'
using namespace std;

long long n, a, b, q;

int main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> q;

    for(int qNum = 0; qNum < q; qNum++){

        cin >> n >> a >> b;

        if(a * 2> b){
            cout << (n%2)*a + n/2*b << endl;
        }
        

        else{
            cout << n*a << endl;
        }   
    }

}