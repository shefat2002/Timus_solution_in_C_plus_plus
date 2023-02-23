#include <bits/stdc++.h>
using namespace std;
#define mx 1000004

void sieve(vector<int>&p)
{
    bool isprime[mx];
    memset(isprime , true , sizeof(isprime));

    for(int i = 2; i*i < mx ; i++){
        if(isprime[i] == true){
            for(int j = i*i ; j < mx; j+=i){
                isprime[j] = false;
            }
        }
    }
    for(int i = 2 ; i < mx ; i++){
        if(isprime[i]== true) p.push_back(i);
    }
}

int main()
{
    int n ;
    vector<int>p;
    sieve(p);
    cin >> n;
    while(n--){
        
        int k;
        cin >> k;
        cout << p[k-1] << endl;
    }

    return 0;
}
