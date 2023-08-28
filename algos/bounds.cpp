#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,44};
    int n=10,x=4;
    auto k = lower_bound(array,array+n,x)-array;
    if (k < n && array[k] == x) {
    // x found at index k
    }
    auto a = lower_bound(array, array+n, x);
    auto b = upper_bound(array, array+n, x);
    cout << b-a << "\n";
     auto r = equal_range(array, array+n, x);
    cout << r.second-r.first << "\n";
}