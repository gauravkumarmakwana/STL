#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector <int> vec1(4, 0);// ->{0, 0, 0, 0}
    vector <int> vec2(4, 10);// ->{10, 10, 10, 10}
    // vector <int> vec3(vec2.begin(), vec2.end());
    vector <int> vec3(vec2); //vec2 copy into vec3

    for(auto c : vec3){
        cout<<c<<" ";
    }// -> 10 10 10 10 (print whole array)
    cout<<endl;
    vec3.emplace_back(5);//->{10, 10, 10, 10, 5}
    vec3.emplace_back(7);//-> {10, 10, 10, 10, 5, 7}
    vec3.emplace_back(6);//->{10, 10, 10, 10, 5, 7, 6}
    for(auto c : vec3){
        cout<<c<<" ";
    }//-> 10 10 10 10 5 7 6
    cout<<endl;
    cout<<vec3.at(5);// -> 7
    cout<<endl;

    vector <int> gaurav(vec3.begin(), vec3.begin()+ 3);//when we don`t copy whole vector in another vectore we can do this and his characties is [) this means last elements are exclude

    for(auto c : gaurav){
        cout<<c<<" ";
    }//-> 10 10 10
    return 0;
}