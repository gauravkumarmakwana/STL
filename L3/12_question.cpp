#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //  Tell me The number of times the X appers in arr

    int a[] =  {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12};// Give in Question
    int x;
    cin >> x;

    int len = sizeof(a)/sizeof(a[0]);
    int ind = upper_bound(a, a+len, x) - lower_bound(a, a+len, x);
    cout<<ind<<'\n';
    return 0;
}