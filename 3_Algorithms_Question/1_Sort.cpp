//  sort 
// First of all practice to this 
// https://practice.geeksforgeeks.org/problems/sort-the-array0055/1
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a[] = {11, 23, 34, 5, 23, 45, 12};
    int len = sizeof(a)/sizeof(a[0]);
    sort(a, a+len);// add two parameters 1. stating itration & 2. End itration
    // and this charactrises is [).
    // this time complexity is n*log(n)
    // Merge sort also takes n*log(n) time

    vector<int> v = {11, 23, 34, 5, 23, 45, 12};

    sort(v.begin(), v.end());//  v.begin() -> start position, v.end() -> end position
    return 0;
}