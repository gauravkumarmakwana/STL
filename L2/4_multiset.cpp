// 9/09/2021 10:44
// multiset doesnot sotre only unique value 
// multiset store all value in sorting way 
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    multiset <int> st;

    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(3);
    st.insert(1);
    st.insert(500);
    for(auto i : st){
        cout<<i<<" ";
    }//-> 1 1 1 2 2 3 500
    cout<<endl;
// When we store string type this will also store sorting way 
    multiset <string> st1;

    st1.insert("Gaurav");
    st1.insert("Makwana");
    st1.insert("G");
    st1.insert("gaurav ");
    st1.insert("g");

    for(auto i : st1){
        cout<<i;
        cout<<endl;
    }
    return 0;
}