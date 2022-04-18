// 30/03/2022 10:09
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    bitset<5> bt = 10100; //bitset is only container of bits value 0 or 1

    // cin>>bt;

    cout<<bt.all()<<endl;//-> 0(false) if all bits are true this will return true else false

    cout<<bt.any()<<endl;//-> 1(true) if any bits are true this will return true else false

    cout<<bt.count()<<endl;// -> 2  this will return number of set bits 

    //Flip Function

    bt.flip(2);// (10000) flip the bit at 2nd index[And bits index start from left hand side]
    // bt.flip(0);
    // bt.flip(4);
    // bt.flip(4);
    cout<<bt<<endl;//-> 10000
    cout<<bt.none()<<endl;//if all bits are 0 this return true

    // bt.set(); [set 1 at all index]
    // bt.set(2); [set 1 at second index]
    bt.set(2, 0); //(10100) [set 1 at second index]

    cout<<bt<<endl;//-> 10100

    bt.reset();// reset all bits with 0
    cout<<bt<<endl;//-> 00000

    cout<<bt.size()<<endl;//-> 5

    cout<<bt.test(1)<<endl;//-> 0 [if bits is set at index 1 this will return true].

    return 0;
}
