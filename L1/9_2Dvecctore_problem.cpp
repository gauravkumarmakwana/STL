// Define 10 x 20 vectore and store value in 1
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    vector<vector<int>> vec(10, vector<int>(20, 1));

    for (auto i : vec){
        for (auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    // but, when we store difference value in vectore abously use for loop

    cout << vec.size() << endl;           //-> 10
    vec.emplace_back(vector<int>(10, 2)); //-> emplace another 1D vector in vec vector
    cout << vec.size() << endl; //-> 11
    for (auto i : vec){
        for (auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    //when add some number at second index see code
    vec[2].emplace_back(4);
    cout << vec[2].size() << endl;//-> 21
    cout << vec.size() << endl; //-> 11
    for (auto i : vec){
        for (auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}