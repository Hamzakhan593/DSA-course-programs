#include <iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int size;
    int top;

    stack(int size){
        this ->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int elements){
        if(size - top > 1){
            top++;
            arr[top] = elements;
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
            cout <<"stack underflow" <<endl;
        }
    }

    int peak(){
        if(top >= 0){
            return arr[top] ;
        }
        else{
            cout <<"stack is empty"<<endl;
            return -1;
        }
    }

    bool empty(){
        if(top >= 0){
            return false;
        }
        else{
            return true;
        }
    }
};

int main(){

    stack st(4);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    
    

    while(!st.empty()){
        cout << st.peak() <<" ";
        st.pop();
    }
 }