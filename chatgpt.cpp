#include <iostream>
using namespace std;

class CircularQueue {
public:
    int *arr;
    int size;
    int head;
    int rear;

    CircularQueue(int size) {
        this->size = size;
        arr = new int[size];
        head = -1;
        rear = -1;
    }

    bool empty() {
        return (head == -1 && rear == -1);
    }

    bool full() {
        return ((rear + 1) % size == head);
    }

    void push(int element) {
        if (full()) {
            cout << "Queue is full. Cannot push " << element << endl;
        } else {
            if (empty()) {
                head = rear = 0;
            } else {
                rear = (rear + 1) % size;
            }
            arr[rear] = element;
        }
    }

    int pop() {
        if (empty()) {
            cout << "Queue is empty. Cannot pop." << endl;
            return -1;  // Indicate failure
        } else if (head == rear) {
            head = rear = -1;
        } else {
            head = (head + 1) % size;
        }
        return 0;  // Indicate success
    }

    void print() {
        if (empty()) {
            cout << "Queue is empty." << endl;
        } else {
            int i = head;
            do {
                cout << arr[i] << " ";
                i = (i + 1) % size;
            } while (i != (rear + 1) % size);
            cout << endl;
        }
    }
};

int main() {
    CircularQueue myQueue(4);

    // Pushing 4 elements into the circular queue
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);

    // Printing the circular queue
    myQueue.print();

    return 0;
}
