#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    int count = 0;
    while(!q.empty()){
        q.pop();
        count++;
    }

    cout << count;
}
