//
// Created by MDand on 2019-09-27.
//

#include <iostream>
#include "stack.hpp"

using namespace std;

MyStack::MyStack(): stacktopindex(-1) {

};

bool MyStack::push(int i) {
    if (MyStack::stacktopindex == MyStack::MAXSIZE)
        return false;
    cout << i << endl;
    return true;
}