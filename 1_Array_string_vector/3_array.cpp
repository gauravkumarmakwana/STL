#include <bits/stdc++.h>
using namespace std;
// int a[10^7]; is the maximum size of int, double, char 
// bool a[10^8]; is the maximum size of bool data type


int main(int argc, char const *argv[])
{
    // int a[10^6]; is the maximum size of int, double, char 
    // bool a[10^7]; is the maximum size of bool data type


    // array <int, 3> arr;
    // int arr[5] ={1};
    array <int, 5> arr =  {1};     // Both line are working same
    for (int i = 0; i < 5; i++)
    {
        cout<<arr.at(i)<<" ";
    }// -> 1 0 0 0 0
    cout<<endl;
    arr.fill(10);//-> {10, 10, 10, 10, 10}
    //this is a traditional method for print
    for (int i = 0; i < 5; i++)
    {
        cout<<arr.at(i)<<" ";
    }

    return 0;
}