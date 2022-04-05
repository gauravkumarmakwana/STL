#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> el1, pair<int, int> el2){
    if(el1.first < el2.first){
        return true;
    }
    if(el1.first == el2.first){
        if(el1.second > el2.second){
            return true;
        }
    }
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    pair<int, int> a[] = {
        {1, 4}, {5, 2}, {5, 9}
    };

    int n =  sizeof(a)/sizeof(a[0]);
    sort(a, a+n, comp);

    for(auto i : a){
        cout<<i.first<<" "<<i.second<<'\n';
    }
    return 0;
}