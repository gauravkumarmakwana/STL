#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //  I want you to find the first occurrence of X
    int a[] = {1, 2, 3, 7, 13, 8, 9, 11, 15, 36, 7};// Given
    int x = 2;

    int ind = -1;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            ind = i;
            break;
        }
    }
    cout<<ind<<'\n';

// Solve Problem using inbuilt function

    auto i = find(a, a+n, 2);// It takes O(N) times

    // find(first iteration, last iteration, X);

    cout<<*i<<'\n';//-> 2

    cout<<i-a<<'\n';// IMP not it down
    // If x is not present in given array so,  that they will return v.end() itration

    vector<int> v = {1, 2, 3, 7, 13, 8, 9, 11, 15, 36, 7};
    x = 70;

    auto j = find(v.begin(), v.end(), x);

    cout<<j - v.begin()<<'\n';
    return 0;
}   