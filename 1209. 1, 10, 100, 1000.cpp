/*
Problem analysis:
The sequence is 1101001000100000... If you see the locations of the digit 1, you can observe that it is at location 1,2,4,7...=> ( 1 + 0 ),( 1 + 1 ),( 1 + ( 1 + 2 )),( 1+(1+2+3 )..So, it is 1+sum_of_n_digits.

What we have now is below:

1 + n*( n+1 )/2 [ note that n*(n+1)/2 is the sum of first n natural numbers ].

Now, this value should be equal to the input value, say P.

1 + n*(n+1)/2 = p [ I/p P=7 => n should be 3, back track ].

2 + n^2 + n = 2p

n^2 + n = 2(p-1)

n^2 + n - 2 (p-1) = 0;

This is a quadratic equation in 'n'. The roots of a quadratic equation are

( -b +- sqrt( b^2 - 4ac ) )/2a

-1 +- sqrt( 8p-7 ) / 2;

If the value of 8p-7 is a perfect square, then the value at that position 'p' would be 1. Else the value would be 0.
*/

//Please try yourself before watch this code

#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

void fast()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
}

int main()
{
    long long int t , n; cin >> t;
    while(t--){
        long long  p ;
        fast();
        cin >> p;
        n = (-1+sqrt(double(8*p-7)))/2.0;
        if(p == (n*(n+1)/2)+1) cout << 1;
        else cout << 0;
        if(t>= 1) cout << " ";
    }
    cout << nl;

    return 0;
}
