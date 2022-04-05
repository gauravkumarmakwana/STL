#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    multimap<string, int> mpp;

    mpp.emplace("Raj", 3);
    mpp.emplace("Gaurav", 21);
    mpp.emplace("Reniyo", 90);
    mpp.emplace("Raj", 50);
    mpp.emplace("Jaydip", 51);
    mpp.emplace("Raj", 5);
// all raj are insert in multimap but, we use map this will override
    for(auto i : mpp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}