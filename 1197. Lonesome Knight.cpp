#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";

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
    int n; cin >> n;
    while(n--){
        solve();
        nl;
    }
    return 0;
}
