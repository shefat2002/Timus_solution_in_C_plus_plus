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
    file();
    //int n; cin >> n;
    //while(n--){
        //fast;
        //case;
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
