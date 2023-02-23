#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";

void solve()
{
    vector<long long> v;
    long long a;
    while(cin >> a){
        v.push_back(a);
    }
    for(int i = v.size() -1 ;i>=0 ;i--){
        cout << fixed << setprecision(4) << 1.0*sqrt(v[i]);
        nl;
    }
}

int main()
{
    solve();
    return 0;
}

