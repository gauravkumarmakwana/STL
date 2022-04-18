#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
set<int> st = {1, 2, 3, 3, 4, 1, 5, 7, 8, 8};
    //only unique elements are store
    //st will look like == {1, 2, 3, 4, 5, 7, 8}
    cout<<st.size()<<endl;//-> 7
    for(auto i : st){
        cout<<i<<" ";
    }//-> 1 2 3 4 5 7 8
    cout<<endl;
//erase in 3 way
    st.erase(st.begin());//-> {2, 3, 4, 5, 7, 8}
    auto it = st.begin();
    it++;
    it++;
    st.erase(st.begin(), it);//-> {4, 5, 7, 8}   ([) This is charactries last elements are execlude)
    st.erase(8); //->{4, 5, 7};
// st.clear(); erase entire set
    cout<<st.size()<<endl;// -> 3
    for(auto i : st){
        cout<<i<<" ";
    }//-> 4 5 7
    cout<<endl;

//find

    auto i = st.find(4); // i will return iteration(adress of 4) of 4
    auto j = st.find(10); // 10 is not present in st when j will return st.end() iteration
    cout<<&i<<endl;//-> print  the address of the 4 elements
    return 0;
}