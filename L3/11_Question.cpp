#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    //  Find me the last occurrence of X in an array or vector
    int a[] =  {1, 5, 7, 7, 8, 10, 10,10,  11, 11, 12};// Give in Question
    int x;
    cin >> x;

    int len = sizeof(a)/sizeof(a[0]);
    int ind = upper_bound(a, a+len, x) - a;
    ind -= 1;

    if(ind >= 0 && a[ind] == x){
        cout<<ind<<'\n';
    }
    else{
        cout<<"Does not Exist"<<'\n';
    }
    return 0;
}