#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int> s;
    
    //push operation
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    //pop
    s.pop();

    cout << "printing top elements "<< s.top() <<endl;

    if(s.empty()){
        cout << "stack is empty" <<endl;
    }
    else{
        cout << "stack is not empty" <<endl;
    }

    cout << "size of stack is " << s.size() <<endl;

    return 0;    
}