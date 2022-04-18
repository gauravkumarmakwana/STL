#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // tell me how many times the elements x occurs in the array

    int a[] = {1, 2, 3, 7, 13, 1, 9, 11, 1, 36, 1};//Given array
    int x = 1;//Given 

    // int len = sizeof(a)/sizeof(a[0]);
    int cnt = 0;
    // for(int i = 0; i < len; i++){
    //     if(a[i] == x)cnt++;
    // }
    for(auto i : a){
        if(i == x)cnt++;
    }
    cout<<cnt<<'\n';
// Find answer using inbuilt function
    int len = sizeof(a)/sizeof(a[0]);
    int cnt1 = count(a, a+len, 1);
    // cnt1 = count(startPosition, EndPosition, X);
    cout<<cnt1<<'\n';
    return 0;
}