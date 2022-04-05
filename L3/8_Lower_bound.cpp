#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a[] = {1, 5, 7, 7, 8, 10, 10, 11, 11, 12};

    int x;
    // x = 10;
    // x = 6;
    // x = 13;
    x = 7;
    int len = sizeof(a)/sizeof(a[0]);
    auto it = lower_bound(a, a+len, x);

    cout<<it-a<<'\n';
    //  This will works only on sorted array or vector
    //  Elements an iterator pointing to the first elements which is not less than X
    // log(N) times
    return 0;
}