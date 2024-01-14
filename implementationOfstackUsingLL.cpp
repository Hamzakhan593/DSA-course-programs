#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next = nullptr;
};

class stack{
    node* head;
    public:
    stack(){
        head = nullptr;
    }

    void push(int data){
        node* newNode = new node();
        newNode ->data = data;

        if(head == nullptr){
            head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void pop(){
        if(head == nullptr){
            cout <<"underFlow" <<endl;
        }
        else{
        node* temp = head;
        head = head ->next;
        delete(temp);
    }
    }

    int top(){
        if(head == nullptr){
            cout << "stack is empty" <<endl;
            return 0;
        }
        else{
            return head->data;
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

//     void printlist(){
//         node* temp = head;
//     while(temp != nullptr){
//         cout << temp ->data << " ";
//         temp = temp ->next;
//     }
// }
};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    
while(!st.empty()){
    cout << st.top();
    st.pop();
}
}