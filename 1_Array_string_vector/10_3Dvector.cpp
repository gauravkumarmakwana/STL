#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    // vector<int> vec1(7, 1);
    // vector<vector<int>> vec2(5, vector<int>(7, 1));
    vector<vector<vector<int>>> vec;  //this is a syntax of the 3D vector

    vector<vector<vector<int>>> vec3(2, vector<vector<int>>(5, vector<int>(7, 2)));

    for(auto i : vec3){
        for(auto j : i){
            for(auto k : j){
                cout<<k<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    }
    return 0;
}