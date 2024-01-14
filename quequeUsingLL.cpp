#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next = nullptr;
};

class queque{
node* head;

public:
queque(){
    head = nullptr;
}

void push(int newdata){
    node* newNode = new node();
    newNode ->data = newdata;

    if(head == nullptr){
    head = newNode;
}
else{
    node* lastNode = head;
    while(lastNode->next != nullptr){
        lastNode = lastNode->next;
    }
    lastNode ->next = newNode;
}
}

void pop(){
    if(head == nullptr){
        cout << "queque is underflow" <<endl;
    }
    else{
        node* temp = head;
        head = head ->next;
        delete(temp);
    }
}

int front(){
    if(head == nullptr){
        cout << "stack is empty" <<endl;
        return 0;
    }
    else{
        return head ->data;
    }
}

bool empty(){
    if(head == nullptr){
        return true;
    }
    else{
        return false;
    }
}
};


int main(){
    queque st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // cout << st.front() <<endl;
    // st.pop();
    //      cout << st.front() <<endl;
    // st.pop();
    //      cout << st.front() <<endl;
    // st.pop();
    //      cout << st.front() <<endl;
    // st.pop();
    //      cout << st.front() <<endl;

    // cout << st.front() <<endl;
    // st.pop();
    // st.pop();
    // st.pop();
    // cout << st.front() <<endl;

    while(!st.empty()){
        cout << st.front() <<" ";
        st.pop();
    }
}