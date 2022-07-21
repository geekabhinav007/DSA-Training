#include <iostream>
using namespace std;
int main()
{


    int a = 10;
    // cout<<*a<<endl;
    //  invalid type argument of unary ‘*’ (have ‘int’) and operand of '*' must be a pointer but has type "int"
    int *p = &a;
    cout << sizeof(p) << endl;
    int b = 5;
    int *p2 = 0; // point to zero address
    cout << p2 << endl;
    // cout<<*p2<<endl; // Exception has occurred.  : - Segmentation fault
    int arr[] = {1, 7, 16, 14};
    cout << arr << endl; // output :- 0x7fffffffdb40

    cout << *arr << " " << arr[0] << endl; // output:- 1

    cout << &arr << endl;    // 0x7fffffffdb40
    cout << &arr[0] << endl; // 0x7fffffffdb40

    cout << *(arr + 1) << " " << *(arr + 2) << endl; // output = 7 16
    cout << *(arr) + 1 << " " << *(arr) + 2 << endl; // output = 2 3
    int i = 1;
    cout<<i[arr]<<endl; // this is interpreated as *(i+arr) and this will same as arr[0]
    // output = 7

    int array[] = {1,2,4,8,9};
    int* p3 = array;
    cout<<p3<<endl; // output 0x7fffffffdb30

    char arrCh[] = "abcdef";
    char *p4 = arrCh;
    cout<<p4<<endl; // output abcdef

    return 0;
}