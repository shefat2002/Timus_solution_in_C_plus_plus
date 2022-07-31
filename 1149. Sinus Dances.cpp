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
    file();
    //int n; cin >> n;
    //while(n--){
        //fast;
    //    case;
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
