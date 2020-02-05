//https://codeforces.com/problemset/problem/1055/A
//code by Hank Jin               blog HankJin.github.io

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int n, s, temp;
int firstTrack[1001] = {0,};
int secondTrack[1001] = {0,};

int main(){
    
    std::ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n >> s;

    for(int i = 1; i <= n; i++){
        cin >> temp;
        firstTrack[i] = temp;
    }
    if(firstTrack[1]){
        if(firstTrack[1]&&firstTrack[s])return 0*printf("YES");
        for(int i = 1; i <= n; i++){
            cin >> temp;
            secondTrack[i] = temp;
        }
        if(secondTrack[s])
        for(int i = s; i <= n; i++){
            if(secondTrack[i]==1&&firstTrack[i]==1) return 0*printf("YES");
        }
    }

    cout << "NO";

    
    


}   