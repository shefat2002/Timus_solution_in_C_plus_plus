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
void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/

int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};

void solve()
{
    string s;
    cin >> s;
    int r = s[0]-'a';
    int c = s[1]-'1';
    int count = 0;
    for(int i = 0 ; i < 8 ; i++){
        int r_check = r + dr[i];
        int c_check = c + dc[i];
        if(r_check >= 0 && r_check <8 && c_check >= 0 && c_check <8) count++;
    }
    cout << count;
}


int main()
{
    file();
    int n; cin >> n;
    while(n--){
        //fast;
        //case;
        solve();
        nl;
    }
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
