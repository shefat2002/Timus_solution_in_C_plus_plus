#include <bits/stdc++.h>
using namespace std;

#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    int n ;
    cin >> n ;
    int k[101] , m[101];
    for(int i = 0 ; i < n ; i++){
        cin >> k[i];

    }
    int ans = 0;
    sort(k, k+n);
    for(int i = 0 ; i < n/2 +1 ; i++)
        ans += (k[i] /2)+1;

    cout << ans;
}

int main()
{
    file();
    //int n; cin >> n;
    //while(n--){
        //fast;
        solve();
        nl;
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
