#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Reverse the array without function

    int a[7]= {1, 2, 3, 4, 5, 6,7};
    int i = 0, j = 6;// using two pointer
    while(i < j){
        swap(a[i], a[j]);// swap first and last elements
        i++;
        j--;
    }
    // print them 
    for(auto i : a){
        cout<<i<<" ";
    }
    cout<<'\n';

    // reverse using function
    // It takes O(n/2) time

    reverse(a, a+7);// 1. Starting position  & 2. End position

    for(auto i : a){
        cout<<i<<" ";
    }
    cout<<'\n';
//  Reverse a vector
    vector<int> v = {1, 2, 3, 4, 5, 6,7};

    reverse(v.begin(), v.end());

    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}   