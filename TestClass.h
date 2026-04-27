#ifndef TEST_CLASS_H
#define TEST_CLASS_H

#include <string>
using namespace std;

class TestClass {
    private:
        bool is_copy = false;
    public:
        TestClass(string name);
        TestClass();
        TestClass(const TestClass& other) { name = other.name; is_copy = true; };
        ~TestClass();
        string name;
        void talk();
};

#endif