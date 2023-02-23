#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";

string A(int n)
{
    string s = "sin(" + to_string(n) + ")";
    while(--n){
        s = "sin(" + to_string(n) + (n&1?"-":"+") + s + ")";
    }
    return s;
}
string S(int n)
{
    string s = "sin(1)+" + to_string(n);
    for(int i =2 , j= n-1 ; i<=n ; i++, j--){
        s = "(" + s + ")" + A(i) + "+" + to_string(j);
    } 
    return s;
}

void solve()
{
    int n; cin >> n;
    
    cout << S(n);
    nl;
}


int main()
{
    solve();
    return 0;
}
