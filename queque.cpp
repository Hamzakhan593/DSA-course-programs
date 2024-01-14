#include <iostream>
using namespace std;

class queque{
    public:
    int *arr;
    int size1;
    int head;
    int rare;

    queque(int size1){
        this->size1 = size1;
        arr = new int[size1];
        head = 0;
        rare = -1;
    }

    void push(int element){
        if(size1 - rare > 1){
            rare++;
            arr[rare] = element;
        }
        else{
            cout << "queque is overFlow" <<endl;
        }
    }

    void pop(){
        if(rare >= 0){
            head++;
        }
        else{
            cout <<"queque is underFlow" <<endl;
        }
    }

    int front(){
        if(rare >= 0 && head <= rare){
            return arr[head];
        }
        else{
            cout << "stack is empty" <<endl;
            return -1;
        }
    }

    bool empty(){
        if(head > rare){
            return true;
        }
        else{
            return false;
        }
    }

    int size(){
        return rare+1 - head;
    }
// clear all elements from queque
    void clear(){
        head = 0;
        rare = 0;
    }
};

int main(){
queque st(4);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
cout << st.size() <<endl;
st.pop();
cout << st.size() <<endl;
st.pop();
cout << st.size() <<endl;

// while(!st.empty()){
//     cout << st.front() << " ";
//     st.pop();
// }

}