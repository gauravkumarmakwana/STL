// 15/09/2021 14:27
// Stack (We can this operation only 👇 on Stack)
// Last in First out
// pop
// top
// size 
// empty 
// Push & emlace

// No iteration are present Stack and Queue 
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    stack <int> st;
    st.push(10);//-> {10}
    st.push(15);//-> {10, 15}
    st.push(1);//-> {10, 15, 1}
    st.push(8);//-> {10, 15, 1, 8}

    cout<<st.top()<<endl;//-> 8

    st.pop();//-> {10, 15, 1}
    st.emplace(100);//-> {10, 15, 1, 100}
    cout<<st.size()<<endl;//4
    cout<<st.empty()<<endl;//if Stack is empty this will return 1 else 0


    return 0;
}