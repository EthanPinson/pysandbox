#include "TestClass.h"
#include <iostream>

void TestClass::talk() {
    cout << "Hello, my name is " << (is_copy ? "also " : "") << name << "." << endl;
}

TestClass::TestClass(string name): name(name) {}

TestClass::TestClass(): name("Unknown") {}

TestClass::~TestClass() {
    cout << "---" << endl;
    cout << "I'm leaving now. --" << name << (is_copy ? " Copy" : "") << endl;
}