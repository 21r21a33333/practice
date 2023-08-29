#include<bits/stdc++.h>
using namespace std;

vector<int> permutation;
int n=5;
bool chosen[5];
void search() {
if (permutation.size() == n) {
    for(auto it:permutation)cout<<it<<"\t";
    cout<<endl;
} else {
for (int i = 0; i < n; i++) {
if (chosen[i]) continue;
chosen[i] = true;
permutation.push_back(i);
search();
chosen[i] = false;
permutation.pop_back();
}
}
}

int main(){
    search();
    printf("iterative \n");
    vector<int> permutation;
    for (int i = 0; i < 5; i++) {
    permutation.push_back(i);
    }
    do {
        for(auto it:permutation)cout<<it<<"\t";
        cout<<endl;
    } while (next_permutation(permutation.begin(),permutation.end()));
}