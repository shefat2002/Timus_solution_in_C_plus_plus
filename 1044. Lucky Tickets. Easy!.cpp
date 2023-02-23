#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";

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
        solve();
    return 0;
}

