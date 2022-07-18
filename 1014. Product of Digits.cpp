#include <bits/stdc++.h>
using namespace std;

#define nl cout << "\n";
#define pi (2*acos(0))
#define case cout << "Case " << case_number << ": "; case_number++;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES "Yes"
#define NO "No"

int case_number = 1;

/*----------------------------------------------------------------------------------------------------------------------------------------*/

void file();

void solve()
{
    int n; cin >> n;
    vector<int>v;
    if (n==0) cout << "10\n";
    else if(n == 1) cout << "1\n";
    else{
        for(int i = 9 ; i > 1 ; i--){
            while(n%i == 0){
                n /= i;
                v.push_back(i);
            }
        }
        if(n == 1){
            for(int i = v.size() -1 ; i>=0 ;i--){
                cout << v[i];
            }
            cout << "\n";
        }
        else cout << "-1\n";
    }
}

int main()
{
    file();
    //int n; cin >> n;
    //while(n--){
    //    fast;
        //case;
        solve();
    //    nl;
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
