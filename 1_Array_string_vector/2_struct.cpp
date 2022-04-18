// #include<iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    double doub;
    char x;

    node(int val_,double doub_,char x_){
        val = val_;
        doub = doub_;
        x = x_;
    }
};

int main(int argc, char const *argv[])
{
//This is a traditional method of passing value of struct 
    // struct node gaurav;
    // gaurav.doub = 10.10;
    // gaurav.val = 10;
    // gaurav.x = 'G';
    // cout << gaurav.val << endl;
    // cout << gaurav.doub << endl;
    // cout << gaurav.x << endl;

//This is a morden method of passing the value of two ways
    node *gaurav = new node(10, 10.10, 'G');
    node gaurav2 = node(10, 10.10, 'f');

    cout<<gaurav->val<<endl;
    // cout<<(*gaurav).val<<endl;
    cout<<gaurav->doub<<endl;
    cout<<gaurav->x<<endl;

    cout<<"gaurav2"<<endl;

    cout<<gaurav2.val<<endl;
    cout<<gaurav2.doub<<endl;
    cout<<gaurav2.x<<endl;
    return 0;
}