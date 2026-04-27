#include <iostream>
using namespace std;

class Queue {
    int arr[100], front = 0, rear = -1;
public:
    void enqueue(int x){ arr[++rear] = x; }
    int dequeue(){ return arr[front++]; }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    cout << q.dequeue() << endl;
    cout << q.dequeue();
}
