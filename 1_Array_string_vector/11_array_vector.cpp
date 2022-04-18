#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    vector<int> arry[4];// This is also vector inside in array but can`t modify the size of array

    arry[0].emplace_back(1);//pop the value in 0 th index 
    arry[0].emplace_back(5);

    arry[1].emplace_back(6);//pop the value in 1 th index

    arry[2].emplace_back(7);//pop the value in 2 th index
    arry[2].emplace_back(15);
    arry[2].emplace_back(8);

    arry[3].emplace_back(3);//pop the value in 3 rd index
    arry[3].emplace_back(4);
    arry[3].emplace_back(15);
    arry[3].emplace_back(13);
    arry[3].emplace_back(12);
// but, can`t increse index
cout<<arry[3].size()<<endl;//-> 5
    for(auto i : arry){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}