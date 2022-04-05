// array size is a predefine , we can`t modify array size so, we use vector
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector <int> vec;
    vec.push_back(0);//->{0}
    vec.push_back(2);//-> {0, 2}
    vec.push_back(3);//-> {0, 2, 3}
    vec.emplace_back(5);//->{0, 2, 3, 5}
    // Emplace_back and push back are work same but, emplace_back is less time 

    vec.pop_back();//->{0, 2, 3}
    vec.pop_back();//-> {0, 2}
//print using for loop
    for(auto c : vec){
        cout<<c<<" ";
    }
    cout<<endl;
// play with second vector
    // vector <int> vec1(4, 0);//->{0, 0, 0, 0}
    vector <int> vec2(4, 10);//->{10, 10, 10, 10}
    for(auto c : vec2){
        cout<<c<<" ";//->10 10 10 10 
    }
    cout<<endl;
    cout<<vec2.size()<<endl;//-> 4
    vec2.emplace_back(15);//->{10, 10, 10, 10, 15}
    //we can modify the size of vector
    vec2.emplace_back(20);//->{10, 10, 10, 10, 15, 20}
    vec2.pop_back();//->{10, 10, 10, 10, 15}
    cout<<vec2.size()<<endl;//-> 5
    for(auto c : vec2){
        cout<<c<<" ";
    }// -> 10 10 10 10 15
    cout<<endl;


    int num;
    cout<<"Enter num : ";
    cin>>num;
    vec2.emplace_back(num);
    for(auto c : vec2){
        cout<<c<<" ";
    }//-> 10 10 10 10 15 num

    vec2.clear(); // Empty 
    for(auto c : vec2){
        cout<<c<<" ";
    }// Blank
    cout<<endl;
    cout<<vec2.size();// -> 0
    return 0;
}