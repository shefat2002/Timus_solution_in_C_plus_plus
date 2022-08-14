#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000000007
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
//knights move
int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/

ll stone[22];
ll totalsum = 0;
int n;
ll ans= MAX_INT;
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
