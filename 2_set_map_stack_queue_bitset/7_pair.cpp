#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    // pair<int, int> pr = {1, 2};  //This is normal pair
    pair<pair<int, int>, int> pr = {{1, 2}, 3};

    cout<<pr.first.second<<endl; //-> 2

    pair<pair<int, int>, pair<int, int>> pr1 = {{1, 2}, {3, 4}};

    // cout<<pr1.first<<endl;  //this will throw error
    cout<<pr1.first.first<<endl; //-> 1
    cout<<pr1.second.second<<endl; //-> 4

    //we use pair in vector, set, map etc.
    return 0;
}