#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int sum = 0;
    if(a >0){
        for(int i =1 ; i <= a ; i++){
            sum+=i;
        }
    }
    else{
        for(int i =a ; i <=1 ; i++){
            sum+=i;
        }
    }
    cout << sum<< endl;

    return 0;
}


