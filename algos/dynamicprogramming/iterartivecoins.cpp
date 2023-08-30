#include<bits./stdc++.h>
using namespace std;
vector<int> coins={1,3,4};
int INF=1e9;
int solve(int n){
    vector<int> value(n+1,INF);
    value[0] = 0;
for (int x = 1; x <= n; x++) {
value[x] = INF;
for (auto c : coins) {
if (x-c >= 0) {
value[x] = min(value[x], value[x-c]+1);
}
}
}
return value[n];
}

void showsol(int n){
    int first[n+1];
    vector<int> value(n+1,INF);
    value[0] = 0;
    for (int x = 1; x <= n; x++) {
    value[x] = INF;
    for (auto c : coins) {
    if (x-c >= 0 && value[x-c]+1<value[x]) {
    value[x] = value[x-c]+1;
    first[x]=c;
    }
    }
    }
    int x=n;  
    cout<<"\t";  
    while(x>0){
        cout<<first[x]<<"\t";
        x-=first[x];
    }
}
void countnoofsol(int n){
    vector<int> count(n+1,0);
    count[0]=1;
    for(int i=1;i<=n;i++){
        for(auto coin:coins){
            if(i-coin>=0)
            count[i]+=count[i-coin];
        }
    }
    cout<<endl<<count[n];
}
int main(){
    cout<<solve(10);
    showsol(10);
    countnoofsol(5);
}