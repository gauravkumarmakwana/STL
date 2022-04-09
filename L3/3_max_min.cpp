#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Find the maximum number in array 
    int a[] = {12, 13, 1, 4, 5, 8, 15};

    int len = sizeof(a)/sizeof(a[0]);// find the length of  array

    int max = INT_MIN;

    for(int k = 0; k < len; k++){
        if(max < a[k]){
            max = a[k];
        }
    }
    cout<<max<<'\n';//-> 15

// Find the maximum number in array using inbuilt function

    int max_el = *max_element(a, a+len);//Add two parameters 1. starting position & 2. end Poisition   --> O(n)
    int min_el = *min_element(a, a+len); // --> O(n)

    cout<<"Min = "<<min_el<<'\n';//-> 1
    cout<<"Max = "<<max_el<<'\n';//-> 15

    
    return 0;
}
