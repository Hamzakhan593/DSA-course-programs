#include <iostream>
using namespace std;

struct node{
    int data;
    node* prev = nullptr;
    node* next = nullptr;
};

void printforward(node* head){
    while(head != nullptr){
        cout <<"forward: " << head ->data <<endl;
        head = head ->next;
    }
}

void printbackward(node* second){
    while(second != nullptr){
        cout <<"backward: " << second ->data <<endl;
        second = second ->prev;
    }
}

int main(){
node* head = new node();
head ->data = 1;
head ->prev = nullptr;

node* second = new node();
second ->data = 2;
second ->prev = head;
second ->next = nullptr;

head ->next = second;

printforward(head);
printbackward(second);
}