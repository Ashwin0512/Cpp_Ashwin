#include<iostream>
using namespace std;

void print_num (int num)    {
    cout<<"Wierd function to print the number : "<<num<<endl;
}

void swap(int *a , int*b)   {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_num_2 (const int *ptr_a , const int *ptr_b)   {
    
    int temp = *ptr_a;
    ptr_a = &(*ptr_b);
    ptr_b = &temp;
    
    cout<<*ptr_a<<" "<<*ptr_b<<"\n";
    // cout<<"Another wierd function to print a number : "<<*ptr_a<<endl;
}

void print_num_3 (const int *const ptr)   {
    cout<<"Another wierd function to print a number : "<<*ptr<<endl;
}

int main()  {
    /* 1. Pass by Value - When the function does not modify the 
    actual parameter and parameter is small and efficient to copy
    (eg. int, char, double etc.)*/

    int a = 10;
    print_num(a);

    /* 2. Pass by reference using a pointer - 
    When the function modifies the actual parameter
    The parameter is too expensive to copy 
    Its OK to the pointer is allowed a nullptr value */

    int num_1 = 10, num_2 = 20;
    swap(num_1,num_2);
    cout<<"num_1 : "<<num_1<<" num_2 : "<<num_2<<"\n";

    /* 3. Pass by reference using a pointer to const - 
    When the function does not modify the actual parameter
    Parameter is too expensive to copy
    Its OK to the pointer is allowed a nullptr value */

    int b = 69 , c = 56;
    print_num_2(&b,&c);

    /* 4. Pass by refernce using const pointer to const - 
    When the function does not modify the actual value 
    The parameter is expensive to copy 
    Its OK to the pointer is allowed a nullptr value
    You don't want to modify the pointer itself */

    int d=89;
    print_num_3(&d);

    /* 5. Pass by reference using a reference - 
    When the function modifies the actual value
    The parameter is expensive to copy 
    The parameter would never be nullptr */
}