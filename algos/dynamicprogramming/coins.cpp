#include<bits/stdc++.h>
using namespace std;
int INF=1e8;
vector<int> coins={1,3,4};

// int solve(int x) {
// if (x < 0) return INF;
// if (x == 0) return 0;
// int best = INF;
// for (auto c : coins) {
// best = min(best, solve(x-c)+1);
// }
// return best;
// }


// int  main(){
//     cout<<solve(10);
// }
//___________________________________________________
//memorization
bool ready[10]={false};
vector<int> value(10,INF);
int solve(int x) {
if (x < 0) return INF;
if (x == 0) return 0;
if (ready[x]) return value[x];
int best = INF;
for (auto c : coins) {
best = min(best, solve(x-c)+1);
}
value[x] = best;
ready[x] = true;
return best;
}

int main(){
    cout<<solve(10);
}