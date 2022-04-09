// 9/09/2021 10:23
// unordered_set and set are work as a same 
// But, set store value sorting way & unordered_set store value any way at any compiling time
// all function work are same of set and unordered_set
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    unordered_set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(2);
    st.insert(5);
    st.insert(6);
    st.insert(7);


    cout << st.size() << endl;//-> 6
    for (auto i : st)
    {
        cout << i << " ";
    }//-> 1 2 3 5 6 7 
    // this will print in any order whereas set print in sorted order
    cout << endl;
    return 0;
}
