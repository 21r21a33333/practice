#include<bits/stdc++.h>
using namespace std;
int arr[10]={1,2,3,5,6,7,2,3,9,10};
int value[10];
int main(){
    for(int i=0;i<10;i++){
        value[i]=1;
        for(int x=0;x<i;x++){
            if(arr[x]<arr[i])value[i]=max(value[i],value[x]+1);
        }
    }
    cout<<value[10-1];
}