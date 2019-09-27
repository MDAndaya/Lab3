//
// Created by MDand on 2019-09-27.
//

#include <iostream>
#include "stack.hpp"

using namespace std;

MyStack::MyStack(): stacktopindex(-1) {
};

bool MyStack::push(int i) {
    if (full())
        return false;
    stacktopindex++;
    intarray[stacktopindex] = i;
    return true;
}

void MyStack::pop() {
    if (!empty())
        stacktopindex--;
}

int MyStack::top() const {
    return stacktopindex;
}

bool MyStack::empty() const {
    return (stacktopindex == -1);
}

bool MyStack::full() const {
    return (stacktopindex == MAXSIZE-1);
}

void MyStack::print() const {
    for(int i = 0; i <= stacktopindex; i++)
        cout << intarray[i] << " ";
}