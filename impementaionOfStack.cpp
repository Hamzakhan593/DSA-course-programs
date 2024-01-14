#include <iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
         if(size - top > 1){
            top++;
            arr[top] = element;
         }
         else{
            cout << "stack overflow" <<endl;
         }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout <<"Stack underFlow" <<endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "stack is empty"<<endl;
            return -1;
        }
    }

    bool empty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    stack st(3);
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.peek() <<endl;
    st.pop();
    cout << st.peek() <<endl;

    if(st.empty()){
        cout << "stack is empty";
    }
    else{
        cout << "stack is not empty";
    }
}