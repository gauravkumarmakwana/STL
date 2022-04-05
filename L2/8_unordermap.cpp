//10/09/2021 14:46
//Unordered map  and map both are work same but, 
//unordered map store the value in any way and ordered map store the value in sorting way
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    unordered_map <string, int> mpp;
    
    mpp.emplace("Gaurav", 21);
    mpp.emplace("Reniyo", 90);
    mpp.emplace("Raj", 50);
    mpp.emplace("Jaydip", 51);
    
    for(auto i : mpp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}