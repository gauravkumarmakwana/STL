#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a[] = {1, 5, 7, 7, 8, 10, 10, 11, 11, 12};

    int x;
    // x = 15;
    x = 10;
    // x = 9;
    // x = 6;
    // x = 12;
    // x = 11;
    int len = sizeof(a)/sizeof(a[0]);
    auto i = upper_bound(a, a+len, x);

    cout<<i-a<<'\n';

    // Returns an iterator which points to an elements which is just greator than X
    // log(N) times
    // Works only on sorted array or vector
    return 0;
}