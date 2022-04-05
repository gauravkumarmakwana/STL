#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s = "bca";

    // all are permutaions are as follow
    // abc
    // acb
    // bac
    // bca
    // cab
    // cba

    bool res = next_permutation(s.begin(), s.end());
    cout<<res<<'\n';// -> true
    //-> This will print True or false

    cout<<s<<'\n';// -> cab
    // S will Goto next sequene permutation

    s = "cba";

    res = next_permutation(s.begin(), s.end());
    cout<<res<<'\n';// -> false

    cout<<s<<'\n';// -> abc
    // it takes O(N) times


    s = "cba";

    res = prev_permutation(s.begin(), s.end());
    cout<<res<<'\n';// -> true

    cout<<s<<'\n';// -> cab

    s = "abc";

    res = prev_permutation(s.begin(),s.end());
    cout<<res<<'\n';// -> false

    cout<<s<<'\n';// -> cba
    return 0;
}