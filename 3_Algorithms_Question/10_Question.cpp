#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Find me the first index where the elements X lies
    int a[] =  {1, 5, 7, 7, 8, 10, 10, 11, 11, 12};// Give in Question
    int x;
    cin >> x;
    // There are 3 approch
    // 1.
    int len = sizeof(a)/sizeof(a[0]);
    int ind = -1;
    for(int i = 0; i < len; i++){
        if(a[i] == x){
            ind = i;
            break;
        }
    }

    cout<<ind<<'\n';

    // This code takes O(N) time

    // 2.

    if(binary_search(a, a+len, x) == true){
        cout<<lower_bound(a, a+len, x) - a<<'\n';
    } 
    else{
        cout<<"Does not Exist"<<'\n';
    }

    // This code block takes 2*log(N) time
    // beacuase binary_search function takes logn time and lower_bound function takes log n so...

    // This will work only sorted arrayor vector 

    // 3.

    ind = lower_bound(a, a+len, x) - a;

    if(ind != len && a[ind] == x){
        cout<<ind<<'\n';
    }
    else{
        cout<<x<<" : Not exist"<<'\n';
    }
    // It takes only log(N) time 
    return 0;
}