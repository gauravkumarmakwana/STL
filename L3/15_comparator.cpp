#include<bits/stdc++.h>
using namespace std;

bool comp(int el1, int el2){
    // cout<<"El1 = "<<el1<<" ";
    // cout<<"El2 = "<<el2<<'\n';
    if(el1 > el2){
        return true;
    }
    return false;
    // return true;
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    sort(a, a+n, comp);
    // sort(a, a+n, greater<int>());
    // sort(a, a+n, false);

    for(auto i : a){
        cout<<i<<" ";
    }
    return 0;
}