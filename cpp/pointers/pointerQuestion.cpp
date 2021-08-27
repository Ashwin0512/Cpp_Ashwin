#include <iostream>
#include<string>
#include<vector>
using namespace std;

int *apply_all (int *arr_1 , int *arr_2 , int s1 , int s2)   {
    int *new_arr {nullptr};
    new_arr = new int [s1*s2];
    int itr=0;
    for(size_t i {0} ; i<s2 ; i++)  {
        for(size_t j{0} ; j<s1 ; j++)   {
            new_arr[itr] = arr_2[i]*arr_1[j];
            itr++;
        }
    }
    return new_arr;
}

void print(int *arr , int size) {
    for(size_t i{0} ; i<size ; i++) {
        cout<<arr[i]<<" ";
    }
}

int main()  {
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout<<"Array 1 : \n";
    print(array1, 5);

    cout<<"\nArray 2 : \n";
    print(array2, 3);

    int *result = apply_all(array1,array2,5,3);
    cout<<"Result : \n";
    print(result,15);

    delete result;
}