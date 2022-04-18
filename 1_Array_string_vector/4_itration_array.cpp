// We are learn four iteration 1. begin(), rbegin(), end(), rend();
// this four are store a address of perticuler palce 
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    array<int, 5> arr = {1, 3, 5, 4, 6}; //->{1, 3, 5, 4, 6}

    for (auto i = arr.begin(); i < arr.end(); i++)
    {
        cout << *i << " "; // "i" is store a address;
    } //-> 1 3 5 4 6
    cout << endl;

    for (auto i = arr.rbegin(); i < arr.rend(); i++)
    {
        cout << *i << " ";
    } //->6 4 5 3 1
    cout << endl;

    for (auto i = arr.end() - 1; i >= arr.begin(); i--)
    {
        cout << *i << " ";
    } //-> 6 4 5 3 1
    cout << endl;


    for (auto i : arr)// This is ForEach Loop
    {
        cout << i << " ";
    }//->1 3 5 4 6
    //This is very easy and short trick 
    cout<<endl;


    cout<<arr.size()<<endl;//-> 5
    cout<<arr.at(3)<<endl;//-> 4
    cout<<arr[3]<<endl;//-> 4  This is working same
    cout<<arr.front()<<endl;// -> 1
    cout<<arr.back()<<endl;// -> 6
    
    return 0;
}