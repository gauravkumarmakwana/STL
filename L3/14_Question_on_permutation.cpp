#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //  if I give you any random string s = "bca" I want you to print all the permutation

    string s = "bca";

    sort(s.begin(), s.end());

    do
    {
        cout<<s<<'\n';
    } while (next_permutation(s.begin(), s.end()));
    
    // Find Time Complexicity of This Code block
    // This loop Works n! times
    return 0;
}