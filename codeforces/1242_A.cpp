#include <bits/stdc++.h>

#define fastcin() std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long 
#define rep(i,bigin,end) for(int i = (bigin); i < (end); i++)
#define endl "\n"
#define all(v) (v).begin(),(v).end() 

ll n;
using namespace std;



int main(){
    fastcin();
    cin >> n;

    ll minFactor = 0;

        for(ll i = 2; i < n; i ++){
            if(n%i == 0){
                minFactor = i;
                break;
            }
        }        
        if(minFactor==0)cout << n;
        else    cout << minFactor;
}
//code by hank_jin
//https://codeforces.com/contest/1242/A