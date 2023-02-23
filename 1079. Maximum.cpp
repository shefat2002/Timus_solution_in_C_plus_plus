#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";

int mem[100000];
int ans[100000];
int rem = 1;

int value(int n)
{
    
    for(int i = rem+1 ; i <= n ; ++i){
        if(i%2) mem[i] = mem[i/2] + mem[i/2+1];
        else mem[i] = mem[i/2];
        ans[i] = max(mem[i], ans[i-1]);
    }
    return ans[n];
}

void solve()
{
    int n;
    while(cin >> n && n != 0){
        cout << value(n);
        nl;
    }
}


int main()
{
    mem[0] = 0;
    mem[1] = 1;
    ans[0] = 0;
    ans[1] = 1;
    solve();
    return 0;
}
