//
// Created by MDand on 2019-09-27.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "stack.hpp"

TEST_CASE("A new stack is empty", "testTag1") {

    MyStack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);

}

TEST_CASE("Pushing three; top should be 2", "testTag2") {

    MyStack tester;

    tester.push(1);
    tester.push(2);
    tester.push(3);

    REQUIRE(tester.top() == 2);
}

TEST_CASE("Pushing 3 and popping 1; top should be 0", "testTag3") {

    MyStack tester;

    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.pop();
    tester.pop();

    REQUIRE(tester.top() == 0);
}

TEST_CASE("Should be full", "testTag4") {

    MyStack tester;

    for (int i = 1; i <= 10; i++)
        tester.push(i);

    REQUIRE(tester.full() == true);
}

TEST_CASE("No more than 10 items, index 0", "testTag5") {

    MyStack tester;

    for (int i = 1; i <= 20; i++)
        tester.push(i);

    REQUIRE(tester.top() == 9);
}

TEST_CASE("Cannot pop lower than empty", "testTag6") {

    MyStack tester;

    tester.push(1);
    tester.pop();

    REQUIRE_NOTHROW(tester.pop());

    REQUIRE(tester.empty() == true);
}

TEST_CASE("Must be able to add after removing from full", "testTag7") {

    MyStack tester;

    for (int i = 1; i <= 10; i++)
        tester.push(i);
    tester.pop();
    tester.push(11);

    REQUIRE(tester.full() == true);

}

TEST_CASE("Empty must point at -1", "testTag 8") {
    MyStack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.top() == -1);
}





