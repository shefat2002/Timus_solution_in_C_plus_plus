#include <bits/stdc++.h>
using namespace std;

int len;
int factorials(int n)
{
    if(n <= 1) return 1;
    return n*factorials(n-len);
}


int main()
{
    int n;
    string s;
    cin >> n >> s;
    len = s.length();
    int f = factorials(n);
    cout << f << endl;
    return 0;
}
