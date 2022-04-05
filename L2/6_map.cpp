//9/09/2021 11:21
// when we store in a pair 👫 we use map 
//map is store in sorting way of first stuff
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int> mpp;

    mpp["Raj"] = 29;
    mpp["Gaurav"] = 29;
    mpp["Gaurav"] = 30;//When we store this type this will over rightand 30 are link with "Gaurav" only one time Gaurav are store in map
    mpp["Reniyo"] = 18;
    mpp["Dhano"] = 16;
    mpp["Rahul"] = 1;
    mpp.emplace("Bravo", 45);
    mpp.emplace("Vishal", 45);
    mpp.insert({"Pago", 12});// insert and emplace are working same but, empalce is a faster and both syntax are deference
//Print
    for (auto i : mpp)
    {
        cout << i.first << " " << i.second;
        cout << endl;
    }
    cout << endl;

    cout<<mpp.size()<<endl;//-> 8

//Note : 
    if(mpp.empty()){
        cout<<"Yes! It is empty"<<endl;
    }
    else{
        cout<<"No, It is not empty"<<endl;
    }
    cout<<mpp.count("Gaurav")<<endl;//-> 1
    //If Gaurav in map this will return 1 or 0
    // cout<<mpp.count(16)<<endl;
    mpp.clear();
    cout<<mpp.empty()<<endl;  //If mpp is empty this will return 1 else 0
    return 0;
}