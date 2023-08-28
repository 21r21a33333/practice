#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,44};
    int n=10,x=4;
    int k = 0;
    for (int b = n/2; b >= 1; b /= 2) {
    while (k+b < n && array[k+b] <= x) k += b;
    }
    if (array[k] == x) {
    cout<<k;
    }
}