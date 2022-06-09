#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <algorithm>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cctype>
#include <limits>
using namespace std;
#define nl cout << "\n";
#define pi (2*acos(0))
#define case cout << "Case " << case_number << ": ";\
case_number++;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES "Yes"
#define NO "No"

int case_number = 1;

/*---------------------------------------------------------------------------------------------------*/




void solve()
{
    vector<long long> v;
    long long a;
    while(cin >> a){
        v.push_back(a);
    }
    for(int i = v.size() -1 ;i>=0 ;i--){
        cout << fixed << setprecision(4) << 1.0*sqrt(v[i]);
        nl;
    }


}

int main()
{
    //int n; cin >> n;
    //while(n--){
        //fast;
        //case;
        solve();
        //nl;
    //}
    return 0;
}

