#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Find the sum of given range of elements in given arrays
    int a[] = {1, 2, 3, 7, 13, 8, 9, 11, 15, 36, 7};

    int s = 5, e = 9;//  Given Range 

    int sum = 0;

    for(int i = s; i < e; i++){
        sum += a[i];
    }

    cout<<sum<<'\n';//-> 43

// Find sum using inbuilt function

    int sum1 = accumulate(a+5, a+9, 0);//  Parameters 1. Start position & /2. End position & 3. intial sum {this characteristics is [) }.

    cout<<sum1<<'\n';//-> 43

// Vector
    vector<int> v = {1, 2, 3, 7, 13, 8, 9, 11, 15, 36, 7};

    int sum2 = accumulate(v.begin(), v.end(), 0);

    cout<<sum2<<'\n';
    return 0;
}