#include <iostream>
using namespace std;

class queue {
public:
int *arr;
int size;
int head;
int rear;

queue(int size){
    this ->size = size;
    arr =  new int[size];
    head = -1;
    rear = -1;
}

bool empty(){
    return (rear == -1 && head == -1);
    // if(rear == -1 && head == -1){
    //     return true;
    // }
    // else{
    //     return false;
    // }
}

bool full(){
    return ((rear + 1) % size == head);
    // if((rear + 1) % size == head){
    //     return true;
    // }
    // else{
    //     return false;
    // }
}

void push(int element){
    if(full()){
        cout << "queue is full" << endl;
    }

    else{

    if(empty()){
        head = rear = 0;
    }
    else{
        rear = (rear+1) % size;
    }
            arr[rear] = element;

}
} 

int pop(){
    if(empty()){
        cout <<"empty! cannot dequeue"<<endl;
        return -1;
    }
        
        else if (head == rear){
            head = rear = -1;
        }
        else{
            head = (head + 1) % size;
        }
}

void print(){
    int i = head;
    do{
        cout << arr[i] <<" ";
        i = (i+1) % size;
    }
        while(i != (rear + 1) % size);
}
};

int main(){
    queue st(4);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
        st.print();    
        cout<<endl;
    st.pop();
    st.push(10);
    st.print();    
    return 0;
}