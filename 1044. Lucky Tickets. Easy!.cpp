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
    int n ; cin >> n;
    int x = pow(10,n/2);
    int count[40] = {0};
    for(int i = 0 ; i < x ; i++){
        int sum = 0;
        int j = i;
        while(j){
            sum += j%10;
            j /=10;
        }
        count[sum]++;
    }
    int total = 0;
    for(int i = 0 ; i < x ; i++){
        int sum = 0;
        int j = i;
        while(j){
            sum += j%10;
            j /=10;
        }
        total +=count[sum];
    }
    cout << total << endl;
    
}

int main()
{
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
