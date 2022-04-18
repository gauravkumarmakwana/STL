#include<iostream>
using namespace std;
namespace gaurav{
    int val  = 10;
}

int main(int argc, char const *argv[])
{
    int val = 10;
    // double val = 10.00;
    cout<<gaurav::val<<endl;
    // std::cout<<gaurav::val<<std::endl;

    cout<<val<<endl;
    return 0;
}