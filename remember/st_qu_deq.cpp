#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(5); // [5]
    d.push_back(2); // [5,2]
    d.push_front(3); // [3,5,2]
    d.pop_back(); // [3,5]

    deque<int> d;
    d.push_back(5); // [5]
    d.push_back(2); // [5,2]
    d.push_front(3); // [3,5,2]
    d.pop_back(); // [3,5

    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);
    cout << q.front(); // 3
    q.pop();
    cout << q.front(); // 
}