#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    //vector<int> vec;// this means we store int type value store in vec but, we store vector in vec 
    vector<vector<int>> vec;//syntax of 2D vector

    vector<int> gaurav1;
    gaurav1.emplace_back(1);
    gaurav1.emplace_back(2);
    gaurav1.emplace_back(3);

    vector<int> gaurav2;
    gaurav2.emplace_back(10);
    gaurav2.emplace_back(20);
// push back some  1D vectore in 2D vectore 
    vec.emplace_back(gaurav1);
    vec.emplace_back(gaurav2);

    for(auto i : vec){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }//-> 1 2 3
    //    10 20
    
// This is a traditional way 
    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec[i].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }//-> 1 2 3
    //  10 20

    return 0;
}