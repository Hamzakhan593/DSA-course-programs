#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sum(vector<int>& myvector){
    int elementSum = 0;
    for(int i = 0; i < 10; i++){
        int element = myvector[i];
        elementSum = elementSum + element;
    }
    cout << elementSum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> myvector;
            int value;
    for(int i = 0; i < 10; i++){
        cin >> value;
        myvector.push_back(value);
            }
    
    sum(myvector);
    return 0;
}
