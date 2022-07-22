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

double x[101] , y[101];

double area(int i , int j)
{
    return sqrt(pow((x[i] - x[j]) , 2) + pow((y[i] - y[j]) , 2));
}


void solve()
{
    int n ;
    double r;
    cin >> n >> r;
    for(int i = 0 ; i < n ; i++){
        cin >> x[i] >> y[i];
    }
    double total = 2*r*pi + area(n-1, 0);
    for(int i = 1 ; i < n ; i++){
        total += area(i-1 , i);
    }
    cout << fixed << setprecision(2) << total;
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
