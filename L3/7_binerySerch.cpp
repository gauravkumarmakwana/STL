#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Binery serach
    // find the given x elements are presents or not in given array

    int a[] = {1, 2, 3, 7, 13, 8, 9, 11, 15, 36, 7};
    int x = 13;

    bool check = false;
    for(auto i : a){
        if(i == x){
            check = true;
            break;
        }
    }

    if(check){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }

    int len = sizeof(a)/sizeof(a[0]);//Find the length of array
    sort(a, a+len);//  This function work only Sorted array
    bool again = binary_search(a, a+len, x);//If X is presents in a they will return true

    // binary_search(first iterator, last iterator, X);
    // log(N) times
    // Works Only on Sorted array or vector
    cout<<again<<'\n';
    return 0;
}