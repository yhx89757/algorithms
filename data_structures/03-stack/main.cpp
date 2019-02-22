#include "stack.cpp"
#include <iostream>

using std::cout;
using std::endl;

int main() {
    Stack<int> stack;
    stack.push_back(8);
    stack.push_back(7);
    stack.push_back(6);
    stack.push_back(0);
    stack.push_back(3);
    cout << stack.ToString() << endl;

    //((Vector<int>) stack)->push_front(1);
}
