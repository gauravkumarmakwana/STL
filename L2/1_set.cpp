//set
//3/09/21 9:11
//set is store only unique value in sorted order
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    // int arry[] = {2, 5, 2, 1, 3}; // find the unique elements in arry e.g. == {1, 2, 3, 5}
    set<int> st = {2, 5, 2, 1, 3};                  // set only store unique value
    for (auto c : st){
        cout << c << " ";
    }//-> 1 2 3 5
    cout<<endl;
    int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     st.insert(x); //st.emplace(x); work as same but, emplace(x) is a faster
    // }                 //-> {1, 2, 3, 5}

    //print using for loop
    for (auto c : st)
    {
        cout << c << " ";
    } //-> 1 2 3 5
    cout<<endl;

    cout<<st.count(10)<<endl; //-> 0 (10 in not set so, this will print 0)
    cout<<st.count(1)<<endl; //-> 1  (1 in set so,  this will print 1)
    cout<<st.count(2)<<endl;// -> 1 (2 in set so, this will print 1)
    return 0;
}