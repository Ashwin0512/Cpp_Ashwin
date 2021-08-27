#include<iostream>
using namespace std;

int main()  {
    int high_score {100};
    int low_score {65};

/* 1. Pointer to constant : Data pointed by the pointer is constant
and cannot be changed, however the pointer itself can change and point 
somewhere else.*/

    const int *score_ptr {&high_score};
    // *score_ptr = 89 // ERROR
    score_ptr = &low_score;

/* 2. Constant pointers : The data pointed to by the pointers can be 
changed, although the pointer itself cannot change and point somewhere else.*/
   
   int *const score_ptr_2 = &high_score;
   *score_ptr_2 = 89;
//    score_ptr_2 = &low_score // ERROR

/* 3. Constr pointers to constant : The data pointed by the pointer, and
the pointer itself both cannot be changed. It cannot point to something  else.*/

    const int *const score_ptr_3 {&high_score};
    // *score_ptr_3 = 99;  // ERROR
    // score_ptr_3 = &low_score;   // ERROR
} 