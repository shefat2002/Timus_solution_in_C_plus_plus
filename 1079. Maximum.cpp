#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
//knights move
int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/

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
    file();
    //int n; cin >> n;
    //while(n--){
        //fast;
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
