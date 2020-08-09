//D3:Normal vs Heap Array(Heap Arrays can be allocated size dynamically using pointers)

#include <iostream>
using namespace std;

int main()
{
    int A[]={1,2,3,4,5},si;//Normal Array declared which is stored in the stack
    cout<<"Enter the size of the array: ";
    cin>>si;
    int *p=new int[si]; // heap array is created where the pointer p is stored in stack memory
                        // "new" keyword is used to create an array in the heap


    // dynamically allocating different sizes of the heap stack during runtime
    delete []p;
    cout<<"Enter the new size of the array: ";
    cin>>si;
    p=new int[si];

    //deleting the heap memory after its use

    delete []p;
    return 0;
}
