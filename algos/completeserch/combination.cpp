#include<bits/stdc++.h>
using namespace std;
vector<int> subset;

void search(int k) {
if (k == 5) {
    for(auto it :subset)cout<<it<<"\t";
    cout<<endl;
} else {
search(k+1);
subset.push_back(k);
search(k+1);
subset.pop_back();
}
}

// int main(){
//     search(1);
// }
/**recrsive method 
 =================
for (int b = 0; b < (1<<n); b++) {
// process subset
}

*/
int main(){
    for (int b = 0; b < (1<<5); b++) {
    vector<int> subset;
    for (int i = 0; i < 5; i++) {
    if (b&(1<<i)) subset.push_back(i);
    }
    for(auto it:subset)cout<<it<<"\t";
    cout<<endl;
}

}