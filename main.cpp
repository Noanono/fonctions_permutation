#include <iostream>
using namespace std;

#include "permut.h"

int main() {

    int e1 = 12, e2 = 14;

    cout << "Normal  : e1 = " << e1 << ", e2 = " << e2 << endl;

    permutf(e1, e2);
    cout << "Permutf : e1 = " << e1 << ", e2 = " << e2 << endl;

    permutv(&e1, &e2);
    cout << "Permutv : e1 = " << e1 << ", e2 = " << e2 << endl;

    permutr(e1, e2);
    cout << "Permutr : e1 = " << e1 << ", e2 = " << e2 << endl;

    return 0;
}
