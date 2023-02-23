#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
ll stone[22];
ll totalsum = 0;
int n;
ll ans= INT_MAX;
void backtrack(ll pos, ll sum){
    
    if(pos == n){
        ll diff = abs(totalsum - 2*sum);
        ans = min(ans, diff);
        return;
    }
    
    backtrack(pos+1, sum+stone[pos]);
    
    backtrack(pos+1, sum);
    
}

void solve()
{
    cin >> n;
    for(int i = 0 ; i< n ; i++){
        cin >> stone[i];
        totalsum += stone[i];
    }
    backtrack(0,0);
    cout << ans;
    nl;
    

}


int main()
{
    file();
    int n; 
    //cin >> n; while(n--){
    //    case;nl;
        solve();
    //}

    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
