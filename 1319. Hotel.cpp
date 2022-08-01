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


void solve()
{
    int n;
    cin >>n;
    int matrix[100][100], value = 1;
    for(int i = 0;i < 2*n-1;i++){
        for(int j = 0 ; j <=i && j <n;j++){
            if((i-j)>=0 && (i-j)< n) matrix[j][i-j] = value++;
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = n-1; j >=0; j--){
            cout << matrix[i][j] << " ";
        }
        nl;
    }
    

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
