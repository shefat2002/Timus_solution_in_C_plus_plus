#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";

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
    solve();
    return 0;
}

