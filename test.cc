#include <iostream>
#include <climits>
#include <math.h>
#include <string.h>
#include <iomanip>
#include "TestClass.h"
using namespace std;

int main() {
    cout << "Hello world [" << flush;
    cout << " test " << flush;
    cout << "]" << endl;
    cout << "hello" << " world" << " concat" << endl;

    int cat_num = 5;
    cat_num = 2;
    cat_num ++;
    string cat_num_str = "Cat Num: ";
    size_t len = cat_num_str.length();
    cout << cat_num_str << cat_num << " Cats" << endl;
    //cout << len << endl;

    cout << "2<<4: " << (2 << 4) << endl;

    // character string ('' instead of "")
    cout << "\'J\' as an int: " << (int)'J' << endl;

    cout << ((2 > 5) ? "2 > 5" : "2 < 5") << endl;

    cout << "0x2f: " << 0x2f << endl;

    cout << "---" << endl;
    cout << "int min: " << INT_MIN << endl;
    cout << "int max: " << INT_MAX << endl;
    cout << "size of int: " << sizeof(int) << " bytes" << endl;

    cout << "---" << endl;
    cout << "pi as float: " << setprecision(30) << (float) M_PI << endl;
    cout << "pi as double: " << setprecision(30) << (double) M_PI << endl;
    cout << "difference: " << M_PI - (float) M_PI << endl;

    cout << "---" << endl;
    int vals[3] = {5, 9, 11};

    cout << "\'int vals[3] {5, 9, 11}\' has length: " << sizeof(vals) / sizeof(int);
    cout << " (" << sizeof(vals) << " / " << sizeof(int) << ")" << endl;
    cout << "@ memory addr: " << &vals << endl;

    for (int i = 0; i < sizeof(vals) / sizeof(int); i++) {
        cout << "index " << i << " of vals: " << vals[i] << endl;
    }

    cout << "---" << endl;
    int shape2[3][2] = {{2, 4}, {6, 8}, {10, 12}};
    cout << "\'int shape2[3][2] = {{2, 4}, {6, 8}, {10, 12}}\'" << endl;
    cout << "LENGTH: " << sizeof(shape2) / sizeof(int);
    cout << " (" << sizeof(shape2) << " / " << sizeof(int) << ")" << endl;
    cout << "@ ADDR: " << &shape2 << endl;

    for (int i = 0; i < sizeof(shape2) / sizeof(shape2[0]); i++) {
        for (int j = 0; j < sizeof(shape2[0]) / sizeof(shape2[0][0]); j++) {
            cout << "index [" << i << "," << j << "] of shape2: " << shape2[i][j] << endl;
        }
    }

    cout << "---" << endl;
    TestClass bob("Bob");
    bob.talk();

    TestClass *unk = new TestClass();
    unk->talk();

    delete unk;

    TestClass bobClone(bob);
    bobClone.talk();

    cout << "---" << endl;
    string input;
    cout << "What's your input?" << endl;
    getline(cin, input);
    cout << "It's: \'" << input << "\'" << endl;
    cout << "Length: " << input.length() << endl;
    cout << "Address: " << &input << endl;

    cout << "---" << endl;
    cout << "OK I am bored, I will crash now." << endl;
    cout << "There was a person at \'" << unk << "\' and their name was:" << endl;
    unk->talk();

    return 0;
}