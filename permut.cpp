//
// Created by noah on 09/09/23.
//

#include "permut.h"

void permutf(int a, int b){
    int c = a;
    a = b;
    b = c;
}
void permutv(int* va, int* vb){
    int c = *va;
    *va = *vb;
    *vb = c;
}
void permutr(int& ra, int& rb){
    int c = ra;
    ra = rb;
    rb = c;
}