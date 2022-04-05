// String is nothig but array of char type
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = {"Gaurav Makwana"};
    // cin>>s;
    //this trick also uses in array
    for(auto c : s){
        cout<<c<<" ";
    }//-> G a u r a v  M a k w a n a 
    cout<<endl;
    cout<<s.at(3)<<endl;//-> r
    cout<<s.size()<<endl;// -> 14
    cout<<s.front()<<endl;// -> G
    cout<<s.back()<<endl;//-> a
    return 0;
}