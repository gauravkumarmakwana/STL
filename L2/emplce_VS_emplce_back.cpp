#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector <int> v;

    v.emplace_back(5);
    v.push_back(6);
    v.emplace_back(7);
    v.emplace_back(8);
    v.emplace_back(9);// emplace_back and push_back add values at last index
    v.emplace(v.begin() + 3, 2);//  emplace and insert add values at given position
    v.insert(v.begin() + 2, 3);


    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<'\n';
    return 0;
}