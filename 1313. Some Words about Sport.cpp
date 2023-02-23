#include <bits/stdc++.h>
using namespace std;
#define nl      cout << "\n";

void solve()
{
    int n; cin >> n;
    int a[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < 2*n-1; i++){
        for(int j = 0 ; j <= i &&j <n; j++){
            if(i-j >=0 && i-j <n) cout << a[i-j][j] << ' ';
        }
    }
}

int main()
{
    solve();
    nl;
    return 0;
}