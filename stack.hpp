//
// Created by MDand on 2019-09-27.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP

#endif //LAB3_STACK_HPP


class MyStack {

private:
    static constexpr int MAXSIZE = 10;

public:
    int intarray[MAXSIZE];
    int stacktopindex;

    MyStack();
    bool push(int i);

};
